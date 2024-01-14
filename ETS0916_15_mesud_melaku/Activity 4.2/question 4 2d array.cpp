#include <iostream>
using namespace std;
int main()
{
    int arr1[3][4] = {};
    int arr2[3][4] = {};
    cout << "Enter the elements:\n ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i][j] % 2 == 0)
            {
                cout << arr1[i][j] << "\t";
            }
            else
            {
                cout << "*"
                     << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}
