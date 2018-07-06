// Chapter 3 Programming Challenge 3
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// generate variables
	float test1;
	float test2;
	float test3;
	float test4;
	float test5;
	float averageScore;

	//ask user for test scores
	cout << "This program will ask you for five test scores. " << endl;
	cout << "Enter the first test score. " << endl;
	cin >> test1;

	cout << "Enter the second test score. " << endl;
	cin >> test2;

	cout << "Enter the third test score. " << endl;
	cin >> test3;

	cout << "Enter the forth test score. " << endl;
	cin >> test4;

	cout << "Enter the fifth test score. " << endl;
	cin >> test5;

	averageScore = (test1 + test2 + test3 + test4 + test5) / 5;
	// display average
	cout << "The average is ..." << endl;

	// set precision of decimal point
	cout << setprecision(1) << fixed;
	cout << averageScore << endl;


	return 0;
}