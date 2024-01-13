#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Input the string
    
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    
    for (char c : input) {
        if (isalpha(c)) { // Check if c is an alphabet
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                vowels++; // Increment vowel count if c is a vowel
            } else {
                consonants++; // Increment consonant count if c is a consonant
            }
        } else if (isdigit(c)) { // Check if c is a digit
            digits++; // Increment digit count if c is a digit
        } else { // Otherwise, c is a special character
            special++; // Increment special character count
        }
    }
    
    // Print the frequency of each type of character
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special << endl;
    
    return 0;
}
