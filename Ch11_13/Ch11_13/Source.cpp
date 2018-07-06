// Chapter 11 Programming Challenge 13

#include<iostream>
#include<string>

using namespace std;

struct PopMachine
{
	string name;
	double cost;
	int amountInMachine;
};

int main()
{
	// create constant variable for types of drinks
	const int TYPES_DRINKS = 5;
	// create array of structures for the drinks
	PopMachine drinks[TYPES_DRINKS];

	// set up the drinks in the machine laid out visually to compare to table
	drinks[0].name = "Cola";		drinks[0].cost = 0.75;	drinks[0].amountInMachine = 20;
	drinks[1].name = "Root Beer";	drinks[1].cost = 0.75;	drinks[1].amountInMachine = 20;
	drinks[2].name = "Lemon-Lime";	drinks[2].cost = 0.75;	drinks[2].amountInMachine = 20;
	drinks[3].name = "Grape Soda";	drinks[3].cost = 0.80;	drinks[3].amountInMachine = 20;
	drinks[4].name = "Cream Soda";	drinks[4].cost = 0.80;	drinks[4].amountInMachine = 20;

	// create a buffer for user's choice
	int buffer = 0;

	// varialbe to hold user entered money
	double money = 0;

	// display menu to user
	cout << "Would you like to order a drink?" << endl;
	cout << "1.) Yes :)" << endl;
	cout << "2.) No, I quit :(" << endl;
	cin >> buffer;
	
	// if statement to determine if the user is going to order a drink
	if (buffer == 1 || buffer == 2)
	{
		// nested if statement to go continue or quit program
		if (buffer == 1)
		{
			// new buffer variable
			int drinkBuffer = 0;

			cout << "Choose a drink!" << endl;
			cout << "_______________" << endl;
			cout << "1.)" << drinks[0].name << "  " << drinks[0].cost << "  " << drinks[0].amountInMachine << endl;
			cout << "2.)" << drinks[1].name << "  " << drinks[1].cost << "  " << drinks[1].amountInMachine << endl;
			cout << "3.)" << drinks[2].name << "  " << drinks[2].cost << "  " << drinks[2].amountInMachine << endl;
			cout << "4.)" << drinks[3].name << "  " << drinks[3].cost << "  " << drinks[3].amountInMachine << endl;
			cout << "5.)" << drinks[4].name << "  " << drinks[4].cost << "  " << drinks[4].amountInMachine << endl;
			cin >> drinkBuffer;

			// another nested if for their selection
			if (drinkBuffer == 1)
			{
				cout << drinks[0].name << " " << drinks[0].cost << endl;
				cout << "Please enter money." << endl;
				cin >> money;
				
				
				while (money < 0 || money > 1)
				{
					cout << "Please enter a dollar or less in change." << endl;
					cin >> money;
				}

				// create variable for remaining cost or change
				double remCost = drinks[0].cost - money;

				while (remCost > 0)
				{
					cout << remCost << " remaining to pay. Please insert money." << endl;
					cin >> money;
					while (money < 0 || money > 1)
					{
						cout << "Please enter a dollar or less in change." << endl;
						cin >> money;
					}
					remCost = remCost - money;
					
				}
				if (remCost == 0)
				{
					cout << "Drink is dispensing. Thank you have a nice day!" << endl;

				}
				else if (remCost < 0)
				{
					cout << "Drink is dispensing. Don't forget your change. Thank you have a nice day!" << endl;
				}
			}
			// another nested if for their selection
			if (drinkBuffer == 2)
			{
				cout << drinks[1].name << " " << drinks[1].cost << endl;
				cout << "Please enter money." << endl;
				cin >> money;


				while (money < 0 || money > 1)
				{
					cout << "Please enter a dollar or less in change." << endl;
					cin >> money;
				}

				// create variable for remaining cost or change
				double remCost = drinks[1].cost - money;

				while (remCost > 0)
				{
					cout << remCost << " remaining to pay. Please insert money." << endl;
					cin >> money;
					while (money < 0 || money > 1)
					{
						cout << "Please enter a dollar or less in change." << endl;
						cin >> money;
					}
					remCost = remCost - money;
					
				}
				if (remCost == 0)
				{
					cout << "Drink is dispensing. Thank you have a nice day!" << endl;

				}
				else if (remCost < 0)
				{
					cout << "Drink is dispensing. Don't forget your change. Thank you have a nice day!" << endl;
				}
			}
			// another nested if for their selection
			if (drinkBuffer == 3)
			{
				cout << drinks[2].name << " " << drinks[2].cost << endl;
				cout << "Please enter money." << endl;
				cin >> money;


				while (money < 0 || money > 1)
				{
					cout << "Please enter a dollar or less in change." << endl;
					cin >> money;
				}

				// create variable for remaining cost or change
				double remCost = drinks[2].cost - money;

				while (remCost > 0)
				{
					cout << remCost << " remaining to pay. Please insert money." << endl;
					cin >> money;
					while (money < 0 || money > 1)
					{
						cout << "Please enter a dollar or less in change." << endl;
						cin >> money;
					}
					remCost = remCost - money;
					
				}
				if (remCost == 0)
				{
					cout << "Drink is dispensing. Thank you have a nice day!" << endl;

				}
				else if (remCost < 0)
				{
					cout << "Drink is dispensing. Don't forget your change. Thank you have a nice day!" << endl;
				}
			}
			// another nested if for their selection
			if (drinkBuffer == 4)
			{
				cout << drinks[3].name << " " << drinks[3].cost << endl;
				cout << "Please enter money." << endl;
				cin >> money;


				while (money < 0 || money > 1)
				{
					cout << "Please enter a dollar or less in change." << endl;
					cin >> money;
				}

				// create variable for remaining cost or change
				double remCost = drinks[3].cost - money;

				while (remCost > 0)
				{
					cout << remCost << " remaining to pay. Please insert money." << endl;
					cin >> money;
					while (money < 0 || money > 1)
					{
						cout << "Please enter a dollar or less in change." << endl;
						cin >> money;
					}
					remCost = remCost - money;
					
				}
				if (remCost == 0)
				{
					cout << "Drink is dispensing. Thank you have a nice day!" << endl;

				}
				else if (remCost < 0)
				{
					cout << "Drink is dispensing. Don't forget your change. Thank you have a nice day!" << endl;
				}
			}
			// another nested if for their selection
			if (drinkBuffer == 5)
			{
				cout << drinks[4].name << " " << drinks[4].cost << endl;
				cout << "Please enter money." << endl;
				cin >> money;


				while (money < 0 || money > 1)
				{
					cout << "Please enter a dollar or less in change." << endl;
					cin >> money;
				}

				// create variable for remaining cost or change
				double remCost = drinks[4].cost - money;

				while (remCost > 0)
				{
					cout << remCost << " remaining to pay. Please insert money." << endl;
					cin >> money;
					while (money < 0 || money > 1)
					{
						cout << "Please enter a dollar or less in change." << endl;
						cin >> money;
					}
					remCost = remCost - money;
					
				}
				if (remCost == 0)
				{
					cout << "Drink is dispensing. Thank you have a nice day!" << endl;

				}
				else if (remCost < 0)
				{
					cout << "Drink is dispensing. Don't forget your change. Thank you have a nice day!" << endl;
				}
			}
		}
		if (buffer == 2)
		{
			cout << "Have a nice day!" << endl;
		}
	}

	return 0;
}