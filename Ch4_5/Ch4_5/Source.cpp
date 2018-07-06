// Chapter 4 Programming Challege 5
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	//create variables with user input
	double dblWeight;
	double dblHeight;
	double dblBMI;

	cout << "Enter your weight in pounds: " << endl;
	cin >> dblWeight;

	cout << "Enter your height in inches: " << endl;
	cin >> dblHeight;

	// do calculations

	dblBMI = dblWeight * 702 / pow(dblHeight, 2);
	
	// create output to user
	cout << "Your BMI is " << dblBMI << endl;

	if (dblBMI >= 25)
	{
		cout << "You are overweight." << endl;
	}
	else
	{
		if (dblBMI <= 18.5)
		{
			cout << "You are underweight." << endl;
		}
		else
		{
			if (dblBMI > 18.5 && dblBMI < 25)
			{
				cout << "You are at optimum weight." << endl;
			}
		}
	}



	return 0;
}