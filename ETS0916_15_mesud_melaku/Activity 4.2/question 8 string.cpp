#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string text;

    cout << "Enter a line of text: ";
    getline(cin, text);

    string uppercaseText = text;
    string lowercaseText = text;

    for (char& c : uppercaseText) {
        c = toupper(c);
    }

    for (char& c : lowercaseText) {
        c = tolower(c);
    }

    cout << "Uppercase: " << uppercaseText << endl;
    cout << "Lowercase: " << lowercaseText << endl;

    return 0;
}
