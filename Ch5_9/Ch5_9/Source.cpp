//Chapter 5 Programming Challenge 9
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	// create variables
	double dblFloors;
	int intFloorCount = 1;

	double dblRooms;
	double dblRoomTotal = 0;
	double dblOccupiedRooms;
	double dblUnoccupiedRooms;
	double dblOccupiedTotal = 0;
	double dblOccupencyPercentage = 0;

	// gather some input from users;
	cout << "Enter total floors for the hotel: " << endl;
	cin >> dblFloors;

	cout << "Enter Number of Rooms for the First Floor: " << endl;
	cin >> dblRooms;
	dblRoomTotal = dblRoomTotal + dblRooms;
	cout << "How many are occupied?" << endl;
	cin >> dblOccupiedRooms;
	dblOccupiedTotal = dblOccupiedTotal + dblOccupiedRooms;

	// create a loop for rooms using the floor data just gathered
	
	
	for (intFloorCount; intFloorCount < dblFloors; intFloorCount++)
	{
		// create if statement to skip 13th floor
		if (intFloorCount == 13)
		{
			continue;
		}
		cout << "Enter Rooms for the Next Floor: " << endl;
		cin >> dblRooms;
		dblRoomTotal = dblRoomTotal + dblRooms;
		cout << "Enter Occupied for this Floor: " << endl;
		cin >> dblOccupiedRooms;
		dblOccupiedTotal = dblOccupiedTotal + dblOccupiedRooms;
	}
	// calculate the percentage
	dblUnoccupiedRooms = dblRoomTotal - dblOccupiedTotal;
	dblOccupencyPercentage = dblOccupiedTotal / dblRoomTotal;
	dblOccupencyPercentage = dblOccupencyPercentage * 100;

	// display results to user
	cout << "This hotel has " << dblRoomTotal << " rooms." << endl;
	cout << "This hotel currently has " << dblOccupiedTotal << " occupied rooms." << endl;
	cout << "This hotel currently has " << dblUnoccupiedRooms << " unoccupied rooms." << endl;
	cout << "This occupency percentage for this hotel is " << dblOccupencyPercentage << "%." << endl;

	return 0;
}