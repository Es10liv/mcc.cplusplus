//Chapter 4 Programming Challenge 9
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	// create variables for the coins
	double dblPennies = 0.01;
	double dblNickles = 0.05;
	double dblDimes = 0.1;
	double dblQuarters = 0.25;
	int intPennies;
	int intNickles;
	int intDimes;
	int intQuarters;
	
	// gather user input on coins
	cout << "To win you need to enter an amount of pennies, nickles, dimes, and quarters that equal a dollar. " << endl;
	cin >> intPennies >> intNickles >> intDimes >> intQuarters;

	// do calculations off of input
	double totalPennies = (intPennies * dblPennies);
	double totalNickles = intNickles * dblNickles;
	double totalDimes = intDimes * dblDimes;
	double totalQuarters = intQuarters * dblQuarters;
	double total = totalPennies + totalNickles + totalDimes + totalQuarters;

	// generate result
	if (total == 1.00)
	{
		cout << "Congratulations you win!" << endl;
	}
	else 
	{
		cout << "Sorry that does not equal a dollar. Please try again." << endl;
	}
	return 0;
}