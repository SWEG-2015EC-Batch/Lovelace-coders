#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char pass[] = "myPassword"; 

    char input[100];
    cout << "Enter the password: ";
    cin.getline(input, 100);

    if (strcmp(input, pass) == 0) {
        cout << "Correct password!" << endl;
    } else {
        cout << "Incorrect password!" << endl;
    }

    return 0;
}
