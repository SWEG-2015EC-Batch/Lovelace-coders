#include <iostream>
using namespace std;
int main()
{
    int temp[8] = {};
    double total = 0;
    double average;
    cout << "Enter the numbers:\n";
    for (int i = 0; i < 8; i++)
    {

        cin >> temp[i];
        total += temp[i];
    }
    average = total / 8;
    cout << "The numbers are:- \n";
    for (int i = 0; i < 8; i++)
    {

        cout << temp[i] << "\t";
    }
    cout << endl;
    cout << "The average of the numbers is " << average;

    return 0;
}
