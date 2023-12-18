#include <iostream>

using namespace std;

int main() {
    int rows = 6;

    for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }

        while (k != 2 * i - 1) {
            if (k == 0 || k == 2 * i - 2 || i == rows) {
                cout << "* ";
            } else {
                cout << "  ";
            }
            ++k;
        }
        cout << endl;
    }

    return 0;
}
