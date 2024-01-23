#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

    for (int i = 0; i < 5; i++) {
        cout << "Address of balance[" << i << "]: " << &balance[i] << endl;
    }

   int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Address of arr[" << i << "][" << j << "]: " << &arr[i][j] << endl;
        }
    }

    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double* balancePtr = balance;

    for (int i = 0; i < 5; i++) {
        cout << "Value at balance[" << i << "]: " << *(balancePtr + i) << endl;
    }
     int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    int* arrPtr = &arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Value at arr[" << i << "][" << j << "]: " << *(arrPtr + i * 4 + j) <<endl;
        }
    }
















	return 0;
}
