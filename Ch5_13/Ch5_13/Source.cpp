// Chapter 5 Programming Challenge 13
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	// create variables
	int intUserNumbers = 0;
	int intMaxNumber = 0;
	int intMinNumber;

	// display a line to the user asking them to enter a number or -99 to end the program
	cout << "Enter a positive integer or enter -99 to end the collection of numbers. " << endl;
	cin >> intUserNumbers;
	intMinNumber = intUserNumbers;

	// create a while loop
	while (intUserNumbers != -99)
	{
		if (intUserNumbers > intMaxNumber)
		{
			intMaxNumber = intUserNumbers;
		}
		else if (intUserNumbers < intMinNumber)
		{
			intMinNumber = intUserNumbers;
		}
		cout << "Enter another number or enter -99 to end the collection of numbers. " << endl;
		cin >> intUserNumbers;
	}
	cout << "The largest number you entered is " << intMaxNumber << endl;
	cout << "The smallest number you entered is " << intMinNumber << endl;

	return 0;
}