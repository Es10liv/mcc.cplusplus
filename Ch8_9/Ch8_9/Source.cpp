// Chapter 8 programming challenge 9

#include <iostream>

using namespace std;

// Function prototypes
void bubbleSort(int[], int, int&);
void selectionSort(int[], int, int&);
void displayResults(int, int);

int main()
{
	// create constant variable for size
	const int SIZE = 20;

	// create two identical arrays
	int arryList1[SIZE] = { 1, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 30, 31, 32, 33, 34, 35, 6, 7, 8};

	int arryList2[SIZE] = { 1, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 30, 31, 32, 33, 34, 35, 6, 7, 8 };

	// create variables for the exchages
	int intExch1 = 0;
	int intExch2 = 0;

	// call bubbleSort funtion
	bubbleSort(arryList1, SIZE, intExch1);

	// call selectionSort function
	selectionSort(arryList2, SIZE, intExch2);

	// call displayResults function
	displayResults(intExch1, intExch2);

}

// the displayResults function displays the exchages both searches had
void displayResults(int intExch1, int intExch2)
{
	cout << "Number of exchanges made by each sort algorithm.\n";
	cout << "Bubble sort:    " << intExch1 << endl;
	cout << "Selection sort: " << intExch2 << endl;
}
// the bubbleSort function does an ascending-order bubble sort on the array it also counts how many exchanges it makes

void bubbleSort(int array[], int size, int &Exch)
{
	// variable to hold the values
	int hold;
	// boolean flag
	bool swap;

	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				hold = array[count];
				array[count] = array[count + 1];
				array[count + 1] = hold;
				swap = true;
				Exch++;
			}
		}
	} while (swap);
}

// the selectionSort function does an ascending-order sort, it also counts its exchanges
void selectionSort(int array[], int size, int &Exch2)
{
	// create variables
	// initial start value
	int startScan;
	// the minimum index in the array
	int minIndex;
	// minimum value in the array
	int minValue;

	// for loop to loop through array and determine the ascending-order of the array
	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		// change minIndex value to match startScan value on each iteration
		minIndex = startScan;
		// change minValue value to match the designated index in the array
		minValue = array[startScan];
		
		for (int index = startScan + 1; index < size; index++)
		{
			// if statement to determine if the selected index is smaller than the minValue
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
				Exch2++;
			}
		}
		
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}