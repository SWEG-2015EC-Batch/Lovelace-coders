#include <iostream>
#include <string>
#include <locale> // Required for toupper() and tolower() functions

using namespace std;

int main() {
    string text;
    cout << "Enter a line of text: ";
    getline(cin, text); // Input the line of text

    // Output the text in uppercase
    string uppercase_text = "";
    for (char c : text) {
        uppercase_text += toupper(c); // Convert each character to uppercase
    }
    cout << "Uppercase: " << uppercase_text << endl;

    // Output the text in lowercase
    string lowercase_text = "";
    for (char c : text) {
        lowercase_text += tolower(c); // Convert each character to lowercase
    }
    cout << "Lowercase: " << lowercase_text << endl;

    return 0;
}
