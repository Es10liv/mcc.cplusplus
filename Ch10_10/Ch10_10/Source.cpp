//Chapter 10 Programming Challenge 10
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

using namespace std;

// function prototype
int replaceSubstring (string string1, string string2, string string3);




int main()
{
	// create string variables
	string string1 = { "the dog jumped over the fence" };
	string string2 = { "the" };,
	string string3 = { "that" };
	// call replaceSubstring function
	replaceSubstring(string1, string2, string3);

	return 0;
}

// create replaceSubstring function
// parameters to include the three strings to compare
int replaceSubstring(string string1, string string2, string string3)
{
	// index of characters in array for the loop
	size_t index = 0;
	// while loop to loop through string1 and replace any instance of string2 with string3
	while (true)
	{
		// locate string2 to replace
		index = string1.find(string2, index);
		if (index == std::string::npos)
		{
			break;
		}
		// replace with string3
		string1.replace(index, 4, string3 + " ");
		// advance index by 4
		index += 4;
	}
	cout << string1 << endl;
	return 0;
}