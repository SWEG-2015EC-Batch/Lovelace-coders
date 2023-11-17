//Time taken program
#include <iostream>

using namespace std;

double timeInSec, timeInMinute, timeInHr, sizeInByte;

    cout << "Input the file size in bytes: ";
    cin >> sizeInByte;

    timeInSec = sizeInByte / 960; //960 characters = 960 bytes
    timeInMinute = timeInSec / 60;
    timeInHr = timeInMinute / 60;
    
    cout << "Time needed in seconds is: " << timeInSec << '\n';
    cout << "Time needed in Minutes is: " << timeInMinute << '\n';
    cout << "Time needed in Hours is: " << timeInHr;

int main()
{


    return 0;
}
