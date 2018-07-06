// Chapter 5 Programming Challenge 17
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	// create variables for the store's profits
	double dblStoreOneProfit;
	double dblStoreTwoProfit;
	double dblStoreThreeProfit;
	double dblStoreFourProfit;
	double dblStoreFiveProfit;

	// ask for user input on each store's profits
	cout << "Enter today's sales for store 1: ";
	cin >> dblStoreOneProfit;
	cout << "Enter today's sales for store 2: ";
	cin >> dblStoreTwoProfit;
	cout << "Enter today's sales for store 3: ";
	cin >> dblStoreThreeProfit;
	cout << "Enter today's sales for store 4: ";
	cin >> dblStoreFourProfit;
	cout << "Enter today's sales for store 5: ";
	cin >> dblStoreFiveProfit;

	// create a variable for the asteriks value
	double dblBarGraph = 100;
	// create a loop for the profits to print in astericks
	while (dblBarGraph <= dblStoreOneProfit)
	{
		cout << "*";
		dblStoreOneProfit = dblStoreOneProfit - 100;
	}
	cout << endl;
	// create the same loop for each store
	while (dblBarGraph <= dblStoreTwoProfit)
	{
		cout << "*";
		dblStoreTwoProfit = dblStoreTwoProfit - 100;
	}
	cout << endl;
	while (dblBarGraph <= dblStoreThreeProfit)
	{
		cout << "*";
		dblStoreThreeProfit = dblStoreThreeProfit - 100;
	}
	cout << endl;
	while (dblBarGraph <= dblStoreFourProfit)
	{
		cout << "*";
		dblStoreFourProfit = dblStoreFourProfit - 100;
	}
	cout << endl;
	while (dblBarGraph <= dblStoreFiveProfit)
	{
		cout << "*";
		dblStoreFiveProfit = dblStoreFiveProfit - 100;
	}
	cout << endl;

	return 0;
}