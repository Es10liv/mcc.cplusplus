// Chapter 9 Programming Challenge 11
#include <iostream>

using namespace std;

// function prototype
int * arrayExpander(int[], int size);

int main()
{
	// create the first array
	int arr[] = { 1, 2, 3, 4, 5 };
	// variable for size of array
	int intSize = 5;

	// create pointer and call arrayExpander function
	int *arrayPointer = arrayExpander(arr, intSize);

	// create a for loop to loop through the second array and display each number
	for (int i = 0; i < intSize * 2; i++)
	{
		cout << arrayPointer[i] << endl;
	}

	return 0;
}

// create an array that
int * arrayExpander(int arr[], int size)
{
	// create a pointer that will be the returned values
	int *expanderArr = new int[size * 2]; // multiply size by two to get double

	// move elements from original array into the expander array
	// initialize the rest of the elements in the array to 0
	for (int i = 0; i < size * 2; i++)
	{
		// if statement adds the orignal array's items to the new array and adds the zeroes
		if (i < size)
		{
			// adds in the items from the first array
			expanderArr[i] = arr[i];

		}
		else
		{
			// adds zeroes to the rest of the array items
			expanderArr[i] = 0;
		}
	}
	return expanderArr;
}