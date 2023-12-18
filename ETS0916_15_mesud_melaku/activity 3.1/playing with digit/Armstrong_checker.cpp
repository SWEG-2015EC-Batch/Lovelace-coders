#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number;
    int sum = 0;
    int digits = 0;

    while (number != 0) {
        noOfDigits++;
        number /= 10;
    }

    number = originalNumber;

    while (number != 0) {
        int digit = number % 10;
        int power = 1;

        // Calculate power of digit using a loop
        for (int i = 0; i < noOfDigits; i++) {
            power *= digit;
        }

        sum += power;
        number /= 10;
    }

    if (sum == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }

    return 0;
}
