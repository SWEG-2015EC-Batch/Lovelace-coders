#include <iostream>

using namespace std;

int main() {
    int number;
    int reversedNumber = 0;

    cout << "Enter a number: ";
    cin >> number;
    const int originalnum = number;

    // Reverse the number
    while (number != 0) {
        int digit = number % 10; 
        reversedNumber = (reversedNumber * 10) + digit; 
        number /= 10; 
    }
    if (reversedNumber == originalnum )
        cout<<"the number is palindrome. ";
    else cout<<"the number is not palindrome. ";


    return 0;
}
