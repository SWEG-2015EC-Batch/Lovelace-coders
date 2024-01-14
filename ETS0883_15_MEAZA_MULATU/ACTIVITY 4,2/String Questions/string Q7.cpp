#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> names; // Create a vector to store the names

    int n;
    cout << "Enter the number of names: ";
    cin >> n; // Input the number of names

    for (int i = 0; i < n; i++) {
        string name;
        cout << "Enter name #" << i+1 << ": ";
        cin >> name; // Input the name
        names.push_back(name); // Add the name to the vector
    }

    sort(names.begin(), names.end()); // Sort the names in alphabetical order

    cout << "The names in alphabetical order are: " << endl;
    for (string name : names) {
        cout << name << endl; // Print each name in the sorted order
    }

    return 0;
}
