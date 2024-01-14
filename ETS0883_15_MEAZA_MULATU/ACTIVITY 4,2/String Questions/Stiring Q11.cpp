#include <iostream>
#include <string> // Required for string data type

using namespace std;

int main() {
    string first, middle, last; // Declare variables to store user input

    // Prompt the user to enter their first, middle, and last names
    cout << "Enter your first name: ";
    cin >> first;
    cout << "Enter your middle name: ";
    cin >> middle;
    cout << "Enter your last name: ";
    cin >> last;

    // Print the initials by accessing the first character of each name
    cout << "Your initials are: " << first[0] << middle[0] << last[0] << endl;

    return 0;
}
