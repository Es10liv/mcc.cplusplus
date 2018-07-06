// Chapter 7 programming challenge 2 test scores
#include<iostream>
#include<iomanip>

using namespace std;

// prototype functions
void sort(double*, int);
double average(double*, int);

int main()
{
	// create variables
	// number of test scores
	int intTestScores;
	// pointer to array
	double *testScorePtr;
	// average test score
	double dblTestAverage;

	// get the number of test scores
	cout << "How many test scores will you enter?" << endl;
	cin >> intTestScores;

	// validate the input prevent user from entering a negative number
	while (intTestScores < 0)
	{
		cout << "The number cannot be negative." << endl;
		cout << "Enter another number: ";
		cin >> intTestScores;
	}

	// create the array to hold test scores
	testScorePtr = new double[intTestScores];

	// fill the array with a loop
	for (int count = 0; count < intTestScores; count++)
	{
		cout << "\nEnter The test score for test # " << (count + 1) << ": ";
		cin >> testScorePtr[count];

		while (testScorePtr[count] < 0)
		{
			cout << "The number cannot be negative." << endl;
			cout << "Enter another number: ";
			cin >> intTestScores;
		}
	}


	// sort the test scores
	sort(testScorePtr, intTestScores);

	// get the average of the test scores
	dblTestAverage = average(testScorePtr, intTestScores);

	// display the sort result and the averages
	cout << "The average of all tests: " << dblTestAverage << endl;

	
	delete[] testScorePtr;
	testScorePtr = 0;

	return 0;
}

// write a function to sort the array in ascending order

void sort(double* score, int size)
{
	int startScan, minIndex;
	double minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = *(score + startScan);

		for (int index = startScan + 1; index < size; index++)
		{
			if (*(score + index) < minValue)
			{
				minValue = *(score + index);
				minIndex = index;
			}
		}

		*(score + minIndex) = *(score + startScan);
		*(score + startScan) = minValue;
	}
}

// Write a function to calculate the average using a pointer to the array of scores

double average(double *score, int size)
{
	double total = 0.00;
	double dblTotalAverage;
	cout << fixed << showpoint << setprecision(2);

	for (int count = 0; count < size; count++)
	{
		total += *score;
		score++;

		dblTotalAverage = total / size;

	}
	return dblTotalAverage;
}