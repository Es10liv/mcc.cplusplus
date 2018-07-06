// Chapter 4 Programming Challenge 14
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	// create variables
	int intChecks;
	double dblOriginalBalance;
	double dblCheckFee = 10;
	double dblCheckPerMonth;
	double dblLessThanTwenty = 0.10;
	double dblTwentyToThirtyNine = 0.08;
	double dblFortyToFiftyNine = 0.06;
	double dblSixtyOrMore = 0.04;
	double dblAccountBelowFee = 15.00;
	double dblAccountTotalFee;

	// gather the data for original balance, and number of checks
	cout << "Enter the accounts balance: " << endl;
	cin >> dblOriginalBalance;

	cout << "Enter the number of checks written this month: " << endl;
	cin >> intChecks;

	// calculate the account's monthly fees and display result to user
	if (dblOriginalBalance < 400)
	{
		if (intChecks >= 60)
		{
			dblAccountTotalFee = dblSixtyOrMore * intChecks + dblCheckFee + dblAccountBelowFee;

			cout << "The total fee is " << dblAccountTotalFee << endl;
		}
		else if (intChecks < 60 && intChecks >= 40)
		{
			dblAccountTotalFee = dblFortyToFiftyNine * intChecks + dblCheckFee + dblAccountBelowFee;

			cout << "The total fee is " << dblAccountTotalFee << endl;
		}
		else if (intChecks < 40 && intChecks >= 20)
		{
			dblAccountTotalFee = dblTwentyToThirtyNine * intChecks + dblCheckFee + dblAccountBelowFee;

			cout << "The total fee is " << dblAccountTotalFee << endl;
		}
		else if (intChecks < 20)
		{
			dblAccountTotalFee = dblLessThanTwenty * intChecks + dblCheckFee + dblAccountBelowFee;

			cout << "the total fee is " << dblAccountTotalFee << endl;
		}
	}
	else if (dblOriginalBalance >= 400)
	{
		if (intChecks >= 60)
		{
			dblAccountTotalFee = dblSixtyOrMore * intChecks + dblCheckFee;

			cout << "The total fee is " << dblAccountTotalFee << endl;
		}
		else if (intChecks < 60 && intChecks >= 40)
		{
			dblAccountTotalFee = dblFortyToFiftyNine * intChecks + dblCheckFee;

			cout << "The total fee is " << dblAccountTotalFee << endl;
		}
		else if (intChecks < 40 && intChecks >= 20)
		{
			dblAccountTotalFee = dblTwentyToThirtyNine * intChecks + dblCheckFee;

			cout << "The total fee is " << dblAccountTotalFee << endl;
		}
		else if (intChecks < 20)
		{
			dblAccountTotalFee = dblLessThanTwenty * intChecks + dblCheckFee;

			cout << "the total fee is " << dblAccountTotalFee << endl;
		}
	}
	return 0;
}