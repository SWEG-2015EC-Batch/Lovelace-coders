#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Find the last digit
    int lastDigit = number % 10;

    // Find the first digit
    int firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    // Print the results
    cout << "First Digit: " << firstDigit << endl;
    cout << "Last Digit: " << lastDigit << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}
