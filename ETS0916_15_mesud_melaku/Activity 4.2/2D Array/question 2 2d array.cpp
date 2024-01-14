#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    cout << endl;

    int rowMultiplication[rows];
    int columnSum[cols] = {0};

    for (int i = 0; i < rows; i++)
    {
        rowMultiplication[i] = 1;
        for (int j = 0; j < cols; j++)
        {
            rowMultiplication[i] *= arr[i][j];
            columnSum[j] += arr[i][j];
        }
    }

    cout << "Row Multiplication: \n";
    for (int i = 0; i < rows; i++)
    {
        cout << "The  multiplication of the " << i + 1 << " row: " << rowMultiplication[i] << endl;
    }

    cout << endl;

    cout << "Column Sum: \n";
    for (int j = 0; j < cols; j++)
    {
        cout << "The  sum of the " << j + 1 << " column: " << columnSum[j] << endl;
    }

    return 0;
}
