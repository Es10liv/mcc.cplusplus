// Chapter 5 Programming Challenge 20
#include<iostream>
#include<iomanip>
#include<math.h>
#include<cstdlib>

using namespace std;

int main()
{
	// create a variable for user input and the random number generated
	int intGeneratedNumber;
	int intUserGuess;

	// generate random number
	intGeneratedNumber = rand();

	// display info about the program and gather user input
	cout << "We generated a random number can you guess it?" << endl;
	cout << "Enter your guess: " << endl;
	cin >> intUserGuess;

	// create a loop with an if statement to determine if the guess is too high, too low, or correct
	while (intUserGuess != intGeneratedNumber)
	{
		if (intUserGuess < intGeneratedNumber)
		{
			cout << "Too low, try again. " << endl;
			cin >> intUserGuess;
		}
		else if (intUserGuess > intGeneratedNumber)
		{
			cout << "Too high, try again: " << endl;
			cin >> intUserGuess;
		}
	}
	if (intUserGuess == intGeneratedNumber)
	{
		cout << "Correct! Good guess!" << endl;
	}

	return 0;
}