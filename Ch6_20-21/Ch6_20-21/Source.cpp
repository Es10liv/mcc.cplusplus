// Chapter 6 Programming Challenge 20 and 21

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

// create function prototypes
double stockProfit(double ns, double pp, double pc, double sp, double sc);

int main()
{
	// create initialized variable for the user to enter
	// ns = number of shares
	double ns = 0;
	// pp = purchase price per share
	double pp = 0;
	// pc = purchase commission price
	double pc = 0;
	// sp = sales price per share
	double sp = 0;
	// sc = sales commission paid
	double sc = 0;
	// create variable for the profit
	double dblProfit;
	
	// create a variable for the running total of profit/loss
	double totalProfit = 0;

	// create a variable for the user to determine how many stocks they want to calculate
	int numStocks = 0;

	// ask the user how many stocks they want to calculate
	cout << "Enter the amount of stocks to calculate: " << endl;
	cin >> numStocks;

	// create a loop for the number stocks the user entered
	for (int i = 1; i <= numStocks; i++)
	{
		// ask the user for each of these items
		cout << "Enter the number of shares: " << endl;
		cin >> ns;

		cout << "Enter the purchase price per share: " << endl;
		cin >> pp;

		cout << "Enter the purchase commission price: " << endl;
		cin >> pc;

		cout << "Enter the sales price per share: " << endl;
		cin >> sp;

		cout << "Enter the sales commission paid: " << endl;
		cin >> sc;

		// call the stockProfit function to calculate the profit/losses
		dblProfit = stockProfit(ns, pp, pc, sp, sc);
		// display the profit for each iteration
		cout << "Profit for stock " << i << " is: $" << dblProfit << endl;

		// create a running total of the stocks
		totalProfit = dblProfit + totalProfit;
	}

	// display the total result to the user
	cout << "The total profit/loss is: $" << totalProfit << endl;

	return 0;
}

// create the function to calculate the profit/loss
double stockProfit(double ns, double pp, double pc, double sp, double sc)
{
	// calculate the stocks profits or loss
	double profit = ((ns * sp) - sc) - ((ns * pp) + pc);

	return profit;
}