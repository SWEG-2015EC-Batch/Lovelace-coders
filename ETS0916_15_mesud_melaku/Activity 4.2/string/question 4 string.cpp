#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter a line of text: ";
    string line;
    getline(cin, line);

    string token;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == ' ') {
            cout << token << endl;
            token = "";
        } else {
            token += line[i];
        }
    }
    

    cout << token << endl;

    return 0;
}
