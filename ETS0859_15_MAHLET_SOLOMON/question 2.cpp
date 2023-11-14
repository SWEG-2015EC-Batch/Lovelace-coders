// question 2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	cout << "Enter a value of x : ";
	cin >> x;
	cout << "Enter a value of y : ";
	cin >> y;
	int result = pow(x, y);
	cout << "x the power of y is " << result << endl;
	return 0;
}

