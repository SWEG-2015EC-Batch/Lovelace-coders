#include <iostream>
using namespace std;
int main()
{
    double volt[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    for (int i = 0; i < 9; i++)
    {
        cout << volt[i] << "\t";
        if (i == 2 || i == 5)
            cout << endl;
    }

    return 0;
}
