#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char choice;
    cout << "Enter a letter or positive number: ";
    cin >> choice;
    if (isalnum(choice) && choice >= '1')
    {
        string letter = "ABCDEFGHGFEDCBA";
        string upper_part = letter;
        string lower_part;
        int j = 0, m = 0;
        for (int i = 0; i < 15; i++)
        {
            if (i < 7)
            {
                for (int k = 0; k < 15; k++)
                {
                    cout << upper_part[k] << " ";
                }
                cout << endl;
                upper_part[7 - j] = ' ';
                upper_part[7 + j] = ' ';
                j++;
                lower_part = upper_part;
            }
            else
            {

                lower_part[0 + m] = letter[0 + m];
                lower_part[14 - m] = letter[14 - m];
                for (int k = 0; k < 15; k++)
                {
                    cout << lower_part[k] << " ";
                }
                cout << endl;

                m++;
            }
        }
    }
    else
        cout << "Error,Invalid input\n";

    return 0;
}
