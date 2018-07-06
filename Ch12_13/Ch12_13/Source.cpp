// Chapter 12 Programming Challenge 13

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

// create a struct
struct Inven
{
	// variable for the item description
	string Desc;
	// variable for the date the item was added to the inventory
	string Date;
	// variable for the amount in inventory
	int Qty;
	// variable for wholesale cost
	double WhsleCost;
	// variable for the retail cost
	double RetailCost;
};

// function prototypes
void addRecord(Inven &, fstream &);
void displayRecord(Inven &, fstream &);
void changeRecord(Inven &, fstream &);
long byteNum(int);
void displayError();
bool validDate(string);

int main()
{
	Inven record;
	int Input;

	// open file
	fstream File("inventory.txt", ios::out | ios::in | ios::binary);
	// validate that the file was opened
	if (!File)
	{
		cout << "Error opening file.\n";
		return 0;
	}

	// display menu to user
	cout << "Inventory program menu." << endl;
	cout << "Choose one of the following numbers to perform a task: " << endl;
	cout << " 1. Add new records to the file." << endl;
	cout << " 2. Display any record in the file." << endl;
	cout << " 3. Change any record in the file." << endl;
	cin >> Input;

	// use switch case to determine menu path
	switch (Input)
	{
	case 1: addRecord(record, File);
		break;
	case 2: displayRecord(record, File);
		break;
	case 3: changeRecord(record, File);
	}

	// close file
	File.close();
	return 0;
}

// create the addRecord function this function accepts the structure and the file stream object
// as its arguments the user is asked to input the record information that is
// validated and stored in the file

void addRecord(Inven &record, fstream &File)
{
	File.seekp(0L, ios::end);
	cout << "Enter the following inventory information:\n";
	cout << "Item description: ";
	cin.ignore();
	getline(cin, record.Desc);
	do
	{
		cout << "Date in the format MM/DD/YYYY: ";
		cin.ignore();
		getline(cin, record.Date);

		if (validDate(record.Date) == 0)
		{
			cout << validDate(record.Date) << endl;
			cout << "Error! Invalid date format.\n";
		}

	} while (validDate(record.Date) == 0);
	do
	{
		cout << "Quantity :";
		cin >> record.Qty;
		if (record.Qty < 0)
			displayError();
	} while (record.Qty < 0);
	do
	{
		cout << "Wholesale cost: ";
		cin >> record.WhsleCost;
		if (record.Qty < 0)
			displayError();
	} while (record.WhsleCost < 0);
	do
	{
		cout << "Retail cost: ";
		cin >> record.RetailCost;
		if (record.RetailCost < 0)
			displayError();
	} while (record.RetailCost < 0);
	File.write(reinterpret_cast<char *>(&record), sizeof(record));
}

// create the displayRecord function this function accepts the structure and
// the file stream object as its arguments the user is ask to input the number of the 
// record to read and display from the file

void displayRecord(Inven &record, fstream &File)
{
	int recNum;

	cout << "Enter the record number: ";
	cin >> recNum;
	if (recNum < 1)
		recNum = 1;
	recNum--;
	File.seekg(byteNum(recNum), ios::beg);
	File.read(reinterpret_cast<char *>(&record), sizeof(record));
	cout << "Record number: " << (recNum + 1) << endl;
	cout << "Item description: ";
	cout << record.Desc << endl;
	cout << "Date : ";
	cout << record.Date << endl;
	cout << "Quantity :";
	cout << fixed << showpoint << setprecision(2);
	cout << record.Qty << endl;
	cout << "Wholesale cost: ";
	cout << record.WhsleCost << endl;
	cout << "Retail cost: ";
	cout << record.RetailCost << endl;
}

// create the changeRecord function This function accepts an Inven structure and
// a fstream object as its arguments. The user is asked to input the number of 
// the record and the information to change in the file.

void changeRecord(Inven &record, fstream &File)
{
	int recNum;

	cout << "Enter the record number: ";
	cin >> recNum;
	if (recNum < 1)
		recNum = 1;
	recNum--;
	File.seekg(byteNum(recNum), ios::beg);
	File.read(reinterpret_cast<char *>(&record), sizeof(record));
	cout << "Enter the following inventory information:\n";
	cout << "Item description: ";
	cin.ignore();
	getline(cin, record.Desc);
	do
	{
		cout << "Date in the format MM/DD/YYYY: ";
		cin.ignore();
		getline(cin, record.Date);
		if (!validDate(record.Date))
		{
			cout << validDate(record.Date) << endl;
			cout << "Error! Invalid date format.\n";
		}
	} while (!validDate(record.Date));
	do
	{
		cout << "Quantity :";
		cin >> record.Qty;
		if (record.Qty < 0)
			displayError();
	} while (record.Qty < 0);
	do
	{
		cout << "Wholesale cost: ";
		cin >> record.WhsleCost;
		if (record.Qty < 0)
			displayError();
	} while (record.WhsleCost < 0);
	do
	{
		cout << "Retail cost: ";
		cin >> record.RetailCost;
		if (record.RetailCost < 0)
			displayError();
	} while (record.RetailCost < 0);
	File.seekp(byteNum(recNum), ios::beg);
	File.write(reinterpret_cast<char *>(&record), sizeof(record));
}

// create the byteNum function this function accepts an integer as its argument. 
// Returns the byte number in the file of the record whose number is passed as the argument

long byteNum(int recNum)
{
	return sizeof(Inven) * recNum;
}

// create the diplayError function this function displays an input validation error message

void displayError()
{
	cout << "Error! number must be greater than 0.\n";
}

// create validDate function this function accepts a string as its argument and test 
// its contents for a valid date format.                                                            

bool validDate(string date)
{
	if (date.length() == 9)
		date = "0" + date;

	if (date.length() != 10)
		return false;

	for (int i = 0; i < date.length(); i++)
	{
		if (i == 2 || i == 5)
		{
			if (date[i] != '/')
			{
				return false;
			}
			continue;
		}

		if (!isdigit(date[i]))
			return false;
	}
	return true;
}