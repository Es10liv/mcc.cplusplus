// Chapter 10 Programming Challenge 3

#include <iostream>
#include <iomanip>
#include <cstring>

int WordCount(char *, int);

using namespace std;

int main()
{
	// call array
	char arr[] = "Four score and seven years ago";
	int length = strlen(arr);
	cout << WordCount(arr, length) << endl;

	return 0;
}

// call word count function
int WordCount(char* arr, int length)
{
	// create a boolean to test whether they are on a whitespace character
	bool whitespace = true; // this pretends that there was a whitespace at the start as well
	int words = 0;

	// for loop to go through array
	for (int i = 0; i < length; i++)
	{
		// test if the character is a whitespace
		bool currentWhiteSpace = isspace((unsigned char)arr[i]);

		// if the characte is not a whitespace but the previous character was
		// it is the start of a new word
		if (whitespace && !currentWhiteSpace)
		{
			words++;
		}

		// retain whitespace info for next iteration
		whitespace = currentWhiteSpace;
	}

	return words;
}

// prototype functions
//void WordCount(char phrase[]);
//
//int main()
//{
//	char arr[] = { "Four score and seven years ago" };
//	
//	//cout << arr << endl;
//	WordCount(arr);
//	return 0;
//}
//
//void WordCount(char phrase[])
//{
//	char *strPtr = nullptr;
//	int length;
//	length = strlen(phrase);
//	cout << length << endl;
//}