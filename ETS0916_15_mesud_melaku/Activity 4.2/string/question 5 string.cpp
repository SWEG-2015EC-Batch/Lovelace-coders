#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    cout << "Enter a string: ";
    string str;
    getline(cin, str);

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int specialChars = 0;

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (!isspace(ch))
        {
            specialChars++;
        }
    }

    cout << "Frequency of vowels: " << vowels << endl;
    cout << "Frequency of consonants: " << consonants << endl;
    cout << "Frequency of digits: " << digits << endl;
    cout << "Frequency of special characters (excluding spaces): " << specialChars << endl;

    return 0;
}
