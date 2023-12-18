#include <iostream>

using namespace std;

int main() {
    int number;
    int reversedNumber = 0;
    
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        int digit = number % 10; // Get the last digit
        reversedNumber = (reversedNumber * 10) + digit; // Append the digit to the reversed number
        number /= 10; // Remove the last digit
    }
    
    cout << "Reversed number: " << reversedNumber << endl;
    
    return 0;
}
