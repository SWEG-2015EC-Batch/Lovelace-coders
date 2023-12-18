#include <iostream>

using namespace std;

int main() {
    int number,digit,evenDigit;
    int product = 1;
    cout << "Enter a number: ";
    cin >> number;


    while (number != 0) {
        digit = number % 10;
        if (digit%2==0){evenDigit = digit;}
        else evenDigit =1;
        product *= evenDigit;
        number /= 10;
    }

    cout << "The product of the even digits is: " << product << endl;

    return 0;
}
