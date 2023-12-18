#include <iostream>

using namespace std;

int main() {
    int number,digit;
    int sum =0;
    cout << "Enter a number: ";
    cin >> number;


    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
