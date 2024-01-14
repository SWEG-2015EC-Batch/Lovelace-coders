#include <iostream>
using namespace std;
int main()
{
    char friend_arr[5][5];
    int stars = 0, friends;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 0 && j == 1) || (i == 1 && j == 0) || (i == 0 && j == 3) || (i == 3 && j == 0) || (i == 0 && j == 4) || (i == 4 && j == 0) || (i == 1 && j == 2) || (i == 2 && j == 1) || (i == 1 && j == 4) || (i == 4 && j == 1) || (i == 3 && j == 4) || (i == 4 && j == 3))
            {
                friend_arr[i][j] = '*';
                stars++;
            }
            else
            {
                friend_arr[i][j] = ' ';
            }
        }
    }
    friends = stars / 2;
    cout << "the number of paired friends is " << friends << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << friend_arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
