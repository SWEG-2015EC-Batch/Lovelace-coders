// question 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int gallon, distance, capacity;
	cout << "what is the capacity of an automobile ?";
	cin >> capacity;
	cout << "how much gallon do you fill at ones ?";
	cin >> gallon;
	distance = capacity * gallon;
	cout << "therfor you will cover " << distance << " mile";
}
