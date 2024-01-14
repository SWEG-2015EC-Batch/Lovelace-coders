#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    vector<string> tokens;

    stringstream ss(input);
    string token;
    while (ss >> token) {
        tokens.push_back(token);
    }


    cout << "Tokens:" << endl;
    for (string t : tokens) {
        cout << t << endl;
    }

    return 0;
}
