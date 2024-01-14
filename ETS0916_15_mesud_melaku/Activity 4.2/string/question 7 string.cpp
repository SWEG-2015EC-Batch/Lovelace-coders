#include <iostream>
#include <string>

int main() {
    using namespace std;

    int num_of_names;

    cout << "Enter the number of names: ";
    cin >> num_of_names;

    string names[num_of_names];

    for (int i = 0; i < num_of_names; i++) {
        cout << "Enter a name: ";
        cin >> names[i];
    }

    for (int i = 0; i < num_of_names - 1; i++) {
        for (int j = i + 1; j < num_of_names; j++) {
            if (names[i] > names[j]) {
                swap(names[i], names[j]);
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;
    for (int i = 0; i < num_of_names; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
