// Chapter 3 Programming Challenge 2
#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
	float ClassA = 15.00;
	float ClassATickets;
	float ClassB = 12.00;
	float ClassBTickets;
	float ClassC = 9.00;
	float ClassCTickets;
	float Total;

	cout << "How many Class A tickets were sold? " << endl;
	cin >> ClassATickets;
	ClassA = ClassA * ClassATickets;

	cout << "How many Class B tickets were sold? " << endl;
	cin >> ClassBTickets;
	ClassB = ClassB * ClassBTickets;

	cout << "How many Class C tickets were sold? " << endl;
	cin >> ClassCTickets;
	ClassC = ClassC * ClassBTickets;

	Total = ClassA + ClassB + ClassC;

	// format precision of decimal point
	cout << setprecision(2) << fixed;

	cout << "$" << Total << endl;

	return 0; 
}
