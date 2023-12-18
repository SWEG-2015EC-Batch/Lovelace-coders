#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
  int originalNumber = number;//to keep the original value of numbers for comparasion

  int sum = 0;

  while (number != 0) {
        int digit = number%10;
        int factorial = tgamma(digit + 1);
        sum+=factorial;
        number /= 10;
        }

    if (sum == originalNumber) {
        cout << originalNumber << " is a strong number." << endl;
    } else {
        cout << originalNumber << " is not a strong number." << endl;
    }

    return 0;
}
