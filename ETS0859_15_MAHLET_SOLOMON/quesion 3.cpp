// question 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char letter;
	cout << "Enter a letter: ";
	cin >> letter;
	if (islower(letter)) // islower - data type (toupper(X))
		cout << "The letter in upper case is: " << char(toupper(letter)) << endl;
	else
		cout << "The letter in lower case is: " << char(tolower(letter)) << endl;
	return 0;
}
