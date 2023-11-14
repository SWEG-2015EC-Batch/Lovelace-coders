// question 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int file_size;
	cout << "Enter file size of your docment : ";
	cin >> file_size;
	double time = file_size / 960;
	cout << "it takes " << time;
	return 0;
}

