#include <iostream>
#include <cstring> // Required for strcmp() function

using namespace std;

int main() {
    char pass[] = "password123"; // Declare and initialize the password

    char input[20]; // Declare a character array to store user input
    cout << "Enter the password: ";
    cin >> input; // Read user input

    // Compare the input with the password using strcmp()
    if (strcmp(input, pass) == 0) {
        cout << "Access granted." << endl;
    }
    else {
        cout << "Access denied." << endl;
    }

    return 0;
}
