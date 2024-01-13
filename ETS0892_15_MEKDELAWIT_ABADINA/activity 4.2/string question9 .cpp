#include <iostream>
#include <cstring> // Required for strcpy() function

using namespace std;

int main() {
    string favorite_programs[2]; // Declare an array of two strings
    
    // Initialize the first element at declaration
    favorite_programs[0] = "Breaking Bad";
    
    // Initialize the second element using strcpy()
    char program_name[] = "Game of Thrones";
    strcpy(favorite_programs[1].data(), program_name);
    
    // Print the names of the favorite programs
    cout << "My favorite TV programs are: " << endl;
    for (string program : favorite_programs) {
        cout << "- " << program << endl;
    }
    
    return 0;
}
