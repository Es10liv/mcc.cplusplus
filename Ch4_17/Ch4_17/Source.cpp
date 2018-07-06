// Chapter 4 Programming Challenge 17
#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>

using namespace std;

int main()
{
	// create variable for the name, three dates, three heights
	string strName;
	string strDateOne;
	string strDateTwo;
	string strDateThree;
	double dblScoreOne;
	double dblScoreTwo;
	double dblScoreThree;

	// gather user input for the Pole vaulters name then dates and scores
	cout << "Enter the vaulter's name: " << endl;
	cin >> strName;

	cout << "Enter the the first day: " << endl;
	cin >> strDateOne;

	cout << "Enter the the first score: " << endl;
	cin >> dblScoreOne;

	cout << "Enter the second day: " << endl;
	cin >> strDateTwo;

	cout << "Enter the second score: " << endl;
	cin >> dblScoreTwo;

	cout << "Enter the third day: " << endl;
	cin >> strDateThree;

	cout << "Enter the third score: " << endl;
	cin >> dblScoreThree;

	// create display order using logical operators and if/elseif
	if (dblScoreOne >= 2.0 && dblScoreOne <= 5.0 && dblScoreTwo >= 2.0 && dblScoreTwo <= 5.0 && dblScoreThree >= 2.0 && dblScoreThree <= 5.0)
	{
		if (dblScoreOne > dblScoreTwo && dblScoreOne > dblScoreThree)
		{
			if (dblScoreTwo > dblScoreThree)
			{
				cout << strName << endl;
				cout << strDateOne << " - " << dblScoreOne << endl;
				cout << strDateTwo << " - " << dblScoreTwo << endl;
				cout << strDateThree << " - " << dblScoreThree << endl;
			}
			else
			{
				cout << strName << endl;
				cout << strDateOne << " - " << dblScoreOne << endl;
				cout << strDateThree << " - " << dblScoreThree << endl;
				cout << strDateTwo << " - " << dblScoreTwo << endl;
			}
		}
		else if (dblScoreTwo > dblScoreOne && dblScoreTwo > dblScoreThree)
		{
			if (dblScoreOne > dblScoreThree)
			{
				cout << strName << endl;
				cout << strDateTwo << " - " << dblScoreTwo << endl;
				cout << strDateOne << " - " << dblScoreOne << endl;
				cout << strDateThree << " - " << dblScoreThree << endl;
			}
			else
			{
				cout << strName << endl;
				cout << strDateTwo << " - " << dblScoreTwo << endl;
				cout << strDateThree << " - " << dblScoreThree << endl;
				cout << strDateOne << " - " << dblScoreOne << endl;
			}
		}
		else if (dblScoreThree > dblScoreOne && dblScoreThree > dblScoreTwo)
		{
			if (dblScoreOne > dblScoreTwo)
			{
				cout << strName << endl;
				cout << strDateThree << " - " << dblScoreThree << endl;
				cout << strDateOne << " - " << dblScoreOne << endl;
				cout << strDateTwo << " - " << dblScoreTwo << endl;
			}
			else
			{
				cout << strName << endl;
				cout << strDateThree << " - " << dblScoreThree << endl;
				cout << strDateTwo << " - " << dblScoreTwo << endl;
				cout << strDateOne << " - " << dblScoreOne << endl;
			}
		}
	}
	else
	{
		cout << "Please enter a valid score between 2.0 and 5.0." << endl;
	}
	return 0;
}