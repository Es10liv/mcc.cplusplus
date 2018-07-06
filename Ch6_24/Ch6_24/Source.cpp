// Chapter 6 Programming Challenge 24

#include<iostream>
#include<iomanip>
#include<math.h>
#include<cstdlib>
#include<ctime>

using namespace std;

// create prototype for function
int cpuChoice();
int userChoice();
void userWin();
void cpuWin();
void draw();

// create constant variables for rock, paper, and scissors
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;

int main()
{
	// create the variable for the computer's choice, player's choice
	int playerChoice;
	int compChoice;
	// create a loop if it is a draw
	int play = 0;
	while (play == 0)
	{
		// call cpuChoice function to get the computer's choice
		compChoice = cpuChoice();

		cout << "We are playing rock, paper, scissors. Enter the number of your choice!" << endl;

		// call the userChoice function to get the user's choice
		playerChoice = userChoice();

		// display cpu choice
		if (compChoice == 1)
		{
			cout << "The computer chose rock." << endl;
		}
		else if (compChoice == 2)
		{
			cout << "The computer chose paper." << endl;
		}
		else if (compChoice == 3)
		{
			cout << "The computer chose scissors." << endl;
		}

		// determine who won


		if (playerChoice == 1 && compChoice == 3 || playerChoice == 2 && compChoice == 1 || playerChoice == 3 && compChoice == 2)
		{
			userWin();
			// break out of play loop
			break;
		}
		else if (playerChoice == 1 && compChoice == 2 || playerChoice == 2 && compChoice == 3 || playerChoice == 3 && compChoice == 1)
		{
			cpuWin();
			// break out of play loop
			break;
		}
		else if (playerChoice == compChoice)
		{
			draw();
		}
		else
		{
			cout << "Invalid input." << endl;
		}
	}
	
	
	return 0;
}

int cpuChoice()
{
	srand(time(NULL));

	int min = 1;
	int max = 3;
	int choice = (min + (rand() % (int)(max - min + 1)));

	return choice;
}

int userChoice()
{
	cout << "1. Rock" << endl;
	cout << "2. Paper" << endl;
	cout << "3. Scissors" << endl;
	int choice;
	cin >> choice;

	return choice;
}

void userWin()
{
	cout << "Congratulations You Win!" << endl;
}

void cpuWin()
{
	cout << "Sorry you lost!" << endl;
}

void draw()
{
	cout << "It's a draw!" << endl;
}