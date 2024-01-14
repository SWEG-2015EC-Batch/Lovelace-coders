
#include <iostream>
#include <cstring>

int main() {
    char favoriteProgram1[] = "The Office";  // Initialize the first program's name at the time of declaration
    char favoriteProgram2[20];  // Declare a character array to store the second program's name

    // Use strcpy to initialize the second program's name
    strcpy(favoriteProgram2, "Breaking Bad");

    std::cout << "My favorite television programs are: " << favoriteProgram1 << " and " << favoriteProgram2 << std::endl;

    return 0;
}


