// Chapter 3 Programming Challenge 11
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// create variables
	float loanPayment;
	float insurancePayment;
	float gasPayment;
	float oilPayment;
	float tiresPayment;
	float maintenancePayment;

	// get user input
	cout << "Enter your loan payment per month. " << endl;
	cin >> loanPayment;

	cout << "Enter your insurance payment per month. " << endl;
	cin >> insurancePayment;

	cout << "Enter your gas estimate per month. " << endl;
	cin >> gasPayment;

	cout << "Enter your oil estimate per month. " << endl;
	cin >> oilPayment;

	cout << "Enter your tires estimate per month. " << endl;
	cin >> tiresPayment;

	cout << "Enter your maintenance payment per month. " << endl;
	cin >> maintenancePayment;

	// calculate yearly payments
	float loanPaymentYear = loanPayment * 12;
	float insurancePaymentYear = insurancePayment * 12;
	float gasPaymentYear = gasPayment * 12;
	float oilPaymentYear = oilPayment * 12;
	float tiresPaymentYear = tiresPayment * 12;
	float maintenancePaymentYear = maintenancePayment * 12;

	// set decimal precision
	cout << setprecision(2) << fixed;

	// display monthly and yearly amounts
	cout << "Payments          " << "Monthly          " << "Yearly" << endl;
	cout << "Loan              " << "$" << loanPayment << "          $" << loanPaymentYear << endl;
	cout << "Insurance         " << "$" << insurancePayment << "          $" << insurancePaymentYear << endl;
	cout << "Gas               " << "$" << gasPayment << "           $" << gasPaymentYear << endl;
	cout << "Oil               " << "$" << oilPayment << "           $" << oilPaymentYear << endl;
	cout << "Tires             " << "$" << tiresPayment << "           $" << tiresPaymentYear << endl;
	cout << "Maintenance       " << "$" << maintenancePayment << "           $" << maintenancePaymentYear << endl;
}