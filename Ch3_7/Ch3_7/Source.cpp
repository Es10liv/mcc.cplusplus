// Chapter 3 Programming Challenge 7
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// create variables
	float adultTicket;
	float adultTicketPrice = 10.00;
	float childTicket;
	float childTicketPrice = 6.00;
	float grossBoxOffice;
	float netBoxOffice;
	float distributorPay;
	
	// get ticket amounts from user
	cout << "How many adult tickets were sold? " << endl;
	cin >> adultTicket;

	cout << "How many child tickets were sold? " << endl;
	cin >> childTicket;

	// calculate the profits
	float adultTicketResult = adultTicket * adultTicketPrice;
	float childTicketResult = childTicket * childTicketPrice;

	grossBoxOffice = adultTicketResult + childTicketResult;
	netBoxOffice = grossBoxOffice * 0.2;
	distributorPay = grossBoxOffice - netBoxOffice;

	// display calculations
	cout << "Movie Name:                    " << "Wheels of Fury" << endl;
	cout << "Adult Tickets Sold:            " << adultTicket << endl;
	cout << "Child Tickets Sold:            " << childTicket << endl;
	cout << "Gross Box Office Profit:       " << "$" << grossBoxOffice << endl;
	cout << "Net Box Office Profit:         " << "$" << netBoxOffice << endl;
	cout << "Amount Paid to Distributor:    " << "$" << distributorPay << endl;

	return 0;
}