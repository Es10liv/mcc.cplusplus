// Chapter 5 Programming Challenge 25
#include<iostream>
#include<iomanip>
#include<math.h>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	//create a variable for the file
	ifstream studentFile;

	// create a variable to hold the students names and variables for first and last in alphabet
	string strName;
	string strFirst;
	string strLast;
	// create a variable for the counter
	int intCounter = 0;

	//open the file
	studentFile.open("LineUp(2).txt");
	cout << "Reading data from the file." << endl;

	// create a loop to look through the file and determine the first and last names for the line
	while (studentFile >> strName )
	{
		if (intCounter == 0)
		{
			strFirst = strName;
			strLast = strName;
			intCounter++;
		}
		else
		{
			if (strName < strFirst)
			{
				strFirst = strName;
			}
			else if (strName > strLast)
			{
				strLast = strName;
			}
		}
	}
	// close the file
	studentFile.close();

	// display the first and last name to the user
	cout << "The first name in the list is " << strFirst << endl;
	cout << "The last name in the list is " << strLast << endl;

	return 0;
}