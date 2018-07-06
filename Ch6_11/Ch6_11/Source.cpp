//Chapter 6 Programmin Challenge 11 Lowest Score
#include <iostream>
#include <iomanip>

using namespace std;

// create prototypes for functions
int getScore(int, int, int &total);
float calcAverage(int, int);
int findLowest(int ScoreArray[5]);

int main()
{
	int scoreArray[5];
	int testScore = 0;
	float average = 0.0f;
	int lowest = 0;
	int total = 0;

	// put scores in array
	for (int i = 1; i <= 5; i++)
	{
		testScore = getScore(testScore, i, total);
		scoreArray[i - 1] = testScore;
	}

	lowest = findLowest(scoreArray);

	average = calcAverage(lowest, total);

	cout << "The lowest score was: " << lowest << endl;
	cout << "The average is: " << setprecision(2) << fixed << average << endl;

	return 0;
}

float calcAverage(int lowest, int total)
{
	int sumOfTopFour = 0;
	float average = 0.0f;

	sumOfTopFour = total - lowest;
	average = sumOfTopFour / 4.0f;
	return average;
}

int findLowest(int scoreArray[5])
{
	int smallestScore = scoreArray[0];
	for (int i = 1; i < 5; i++)
	{
		if (scoreArray[i] < smallestScore)
			smallestScore = scoreArray[i];
	}
	return smallestScore;
}

int getScore(int testScore, int i, int &total)
{
	cout << "Enter test score for exam " << i << ":" << endl;
	cin >> testScore;

	// validate the input
	while (testScore < 0 || testScore > 100)
	{
		cout << "Please enter valid test score. Try Again: " << endl;
		cin >> testScore;
	}

	total += testScore;
	return testScore;
}