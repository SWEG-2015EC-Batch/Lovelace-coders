#include <iostream>
using namespace std;
int main()
{
    unsigned int rows, column;
    cout << "how many rows does the the first table have: ";
    cin >> rows;
    cout << "how many column does the the first table have: ";
    cin >> column;
    double first[rows][column] = {};
    double second[rows][column] = {};
    double result[rows][column] = {};

    cout << "Enter the first table \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {

            cin >> first[i][j];
        }
    }
    cout << "Enter the second table \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {

            cin >> second[i][j];
        }
    }
    cout << "The result  is :-\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result[i][j] = first[i][j] + second[i][j];
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
