#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter the word: \n";
    cin >> word;

    int size = word.length();
    string cleanedWord = "";

    for (int i = 0; i < size; i++)
    {
        if (isalpha(word[i]))
        {
            cleanedWord += word[i];
        }
    }

    cout << "Word with non-alphabet characters removed: " << cleanedWord << endl;

    return 0;
}
