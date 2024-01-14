#include <iostream>
using namespace std;
int main()
{
    int size;
    bool check1 = true; // intially assuming both are identical and,this is my comment teacher not gpt -_-
    cout << "Enter the size of the lists: ";
    cin >> size;
    float arr1[size] = {};
    float arr2[size] = {};
    cout << "Enter the first list \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the second list \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < size; i++)
    {
        bool check2 = false; // this checks whether each elements in first array is found in the other
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                check2 = true;
                break;
            }
        }
        if (check2 == false)
        {
            check1 = false;
        }
    }
    for (int i = 0; i < size; i++)
    {
        bool check2 = false; // this checks whether each elements in second array is found in the other
        for (int j = 0; j < size; j++)
        {
            if (arr2[i] == arr1[j])
            {
                check2 = true;
                break;
            }
        }
        if (check2 == false)
        {
            check1 = false;
        }
    }

    if (check1 == true)
    {
        cout << "They are identical.";
    }
    else
        cout << "They are not identical or different.";

    return 0;
}
