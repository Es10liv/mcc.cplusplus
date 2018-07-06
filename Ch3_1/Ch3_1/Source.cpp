// Chapter 3 Programming Challenge 1
#include<iostream>

using namespace std;

int main()
{
	int gasTank;
	int milesFull;
	int milesPerGallon;

	cout << "Enter how many gallons fit in your tank. " << endl;
	cin >> gasTank;

	cout << "Enter how many miles you can get on a full tank. " << endl;
	cin >> milesFull;

	milesPerGallon = milesFull / gasTank;

	cout << "You can get " << milesPerGallon << " mpg." << endl;

	return 0;
}