#include <iostream>
using namespace std;
int main()
{
    unsigned int size, j = 0;
    cout << "Enter how many number you want to check: ";
    cin >> size;
    int arr1[size] = {};
    int arr2[size] = {};
    cout << "Enter the numbers:\n";
    for (int i = 0; i < size; i++)
    {

        cin >> arr1[i];
        if (arr1[i] % 2 == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
    }
    cout << "Here is the even numbers that you inserted in reverse order: \n";
    for (int i = j-1; i >= 0; i--)
    {
        cout << arr2[i] << "\t";
    }

    return 0;
}
