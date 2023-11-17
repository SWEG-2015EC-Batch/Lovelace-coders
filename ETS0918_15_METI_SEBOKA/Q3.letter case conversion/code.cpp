// letter case conversion program
#include <iostream>
using namespace std;
int main(){
char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (islower(letter)) {
        cout << "The uppercase equivalent is: " << static_cast<char>(toupper(letter)) << endl;
    } else if (isupper(letter)) {
        cout << "The lowercase equivalent is: " << static_cast<char>(tolower(letter)) << endl;
    } else {
        cout << "Invalid input. Please enter a letter." << endl;
      return 0;
    }
