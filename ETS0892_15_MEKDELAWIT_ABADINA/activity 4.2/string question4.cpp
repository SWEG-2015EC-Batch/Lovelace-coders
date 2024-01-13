#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input); // Input the line of text
    
    vector<string> tokens; // Create a vector to store the tokens
    
    stringstream ss(input); // Create a stringstream object to tokenize the input string
    string token;
    while (ss >> token) {
        tokens.push_back(token); // Add each token to the vector
    }
    
    // Print the tokens
    cout << "Tokens:" << endl;
    for (string t : tokens) {
        cout << t << endl;
    }
    
    return 0;
}
