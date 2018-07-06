//Chapter 6 Programming Challenge 5
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

// create protoypes for funtion
double fallingDistance(int t = 0);

// declare constant variable of gravity
const double dblGravity = 9.8;

int main()
{
	// create a variable for time
	int t = 0;
	// create a variable for distance
	double dblDistance = 0;

	cout << "Displaying the total distance for each second the object fell; from 1 to 10." << endl;

	// creat loop for the time the object falls
	for (int i = 1; i <= 10; i++)
	{
		dblDistance = fallingDistance(i);

		// display the data
		cout << i << " seconds: " << dblDistance << " meters" << endl;
	}

	return 0;
}

double fallingDistance(int t)
{
	// create variable for distance again
	double d = 0;
	// do calculations pow is accessible through <math.h>
	d = (0.5 * dblGravity) * (pow(t, 2));
	// return the distance to main
	return d;
}