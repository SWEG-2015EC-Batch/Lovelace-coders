// 4.1 - 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int first[2][3];
    int second[2][3];
    int total[2][3];
    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 3;j++) {
            cin >> first[i][j];
        }
        cout << endl;
    }
    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 3;j++) {
            cin >> second[i][j];
        }
        cout << endl;
    }
    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 3;j++) {
            total[i][j] = first[i][j] + second[i][j];
            cout << total[i][j];
        }
        cout << endl;
    }
   
    return 0;
}
/*  
int balance[4][6] = { {3,4,5},{2,3},{4},{6,8,9} };

    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 6;j++) {
            cout << balance[i][j] << " ";
        }
        cout << endl;
    }
 int residence[5] = { 16,27,39,56,81 };
    int current[5], power[5];
    for (int i = 0;i < 5;i++) {
        cout << "enter current number"<<i;
        cin >> current[i];
        power[i] = residence[i] * pow(current[i], 2);
    }
    for (int i = 0;i < 5;i++) {
        cout << residence[i] << " " << current[i] << " " << power[i];
        cout << endl;


    }
     int n;
    int scores[3][10];
    for (int i = 0;i < 10;i++){
        cout << "enter your mid exam" << endl;
        cin >> scores[0][i];
        cout << "enter your final exam" << endl;
        cin >> scores[1][i];
   scores[2][i] = scores[0][i] + scores[1][i];
    }
    for (int i = 0;i < 10;i++) {
        cout << scores[1][i] << " " << scores[2][i];
        cout << endl;
    }
    */
