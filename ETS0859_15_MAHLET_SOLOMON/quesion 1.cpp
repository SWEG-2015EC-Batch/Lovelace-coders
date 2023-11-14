// question 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double weight, height, BMI;
	cout << "Enter a weight : ";
	cin >> weight;
	cout << "Enter a height : ";
	cin >> height;
	BMI = weight / (height * height);
	cout << "BMI is " << BMI << endl;
}

