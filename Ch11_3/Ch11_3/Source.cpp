// Chapter 11 Programming Challenge 3
// Corporate Sales Data

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

// create structure
struct Division
{
	string DivisionName; // string for name
	double FirstQtrSales; // double for the first quarter sales
	double SecondQtrSales; // double for the second quarter sales
	double ThirdQtrSales; // double for third quarter sales
	double ForthQtrSales; // double for forth quarter sales
};

int main()
{
	Division division1;
	Division division2;
	Division division3;
	Division division4;

	// info for division 1
	cout << "Please enter the division." << endl;
	cin >> division1.DivisionName;
	
	cout << "Please enter the first quarter sales." << endl;
	cin >> division1.FirstQtrSales;
	if (division1.FirstQtrSales < 0)
	{
		cout << "Please enter a positve number." << endl;
		cin >> division1.FirstQtrSales;
	}
	cout << "Please enter the second quarter sales." << endl;
	cin >> division1.SecondQtrSales;
	if (division1.SecondQtrSales < 0)
	{
		cout << "Please enter a positve number." << endl;
		cin >> division1.SecondQtrSales;
	}

	cout << "Please enter the third quarter sales." << endl;
	cin >> division1.ThirdQtrSales;
	if (division1.ThirdQtrSales < 0)
	{
		cout << "Please enter a positve number." << endl;
		cin >> division1.ThirdQtrSales;
	}

	cout << "Please enter the forth quarter sales." << endl;
	cin >> division1.ForthQtrSales;
	if (division1.ForthQtrSales < 0)
	{
		cout << "Please enter a positve number." << endl;
		cin >> division1.ForthQtrSales;
	}

	// info for division 2
	cout << "Please enter the division." << endl;
	cin >> division2.DivisionName;

	cout << "Please enter the first quarter sales." << endl;
	cin >> division2.FirstQtrSales;
	if (division2.FirstQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division2.FirstQtrSales;
	}

	cout << "Please enter the second quarter sales." << endl;
	cin >> division2.SecondQtrSales;
	if (division2.SecondQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division2.SecondQtrSales;
	}

	cout << "Please enter the third quarter sales." << endl;
	cin >> division2.ThirdQtrSales;
	if (division2.ThirdQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division2.ThirdQtrSales;
	}

	cout << "Please enter the forth quarter sales." << endl;
	cin >> division2.ForthQtrSales;
	if (division2.ForthQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division2.ForthQtrSales;
	}

	// info for division 3
	cout << "Please enter the division." << endl;
	cin >> division3.DivisionName;

	cout << "Please enter the first quarter sales." << endl;
	cin >> division3.FirstQtrSales;
	if (division3.FirstQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division3.FirstQtrSales;
	}

	cout << "Please enter the second quarter sales." << endl;
	cin >> division3.SecondQtrSales;
	if (division3.SecondQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division3.SecondQtrSales;
	}

	cout << "Please enter the third quarter sales." << endl;
	cin >> division3.ThirdQtrSales;
	if (division3.ThirdQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division3.ThirdQtrSales;
	}

	cout << "Please enter the forth quarter sales." << endl;
	cin >> division3.ForthQtrSales;
	if (division3.ForthQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division3.ForthQtrSales;
	}

	// info for division 4
	cout << "Please enter the division." << endl;
	cin >> division4.DivisionName;

	cout << "Please enter the first quarter sales." << endl;
	cin >> division4.FirstQtrSales;
	if (division4.FirstQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division4.FirstQtrSales;
	}

	cout << "Please enter the second quarter sales." << endl;
	cin >> division4.SecondQtrSales;
	if (division4.SecondQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division4.SecondQtrSales;
	}

	cout << "Please enter the third quarter sales." << endl;
	cin >> division4.ThirdQtrSales;
	if (division4.ThirdQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division4.ThirdQtrSales;
	}

	cout << "Please enter the forth quarter sales." << endl;
	cin >> division4.ForthQtrSales;
	if (division4.ForthQtrSales < 0)
	{
		cout << "Please enter a positive number." << endl;
		cin >> division4.ForthQtrSales;
	}

	return 0;
}