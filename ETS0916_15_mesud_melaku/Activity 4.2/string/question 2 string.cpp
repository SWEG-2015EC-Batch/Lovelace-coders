#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string word1, word2;
    cout << "Enter the word: ";
    cin >> word1;
    int size = word1.length();
    word2.resize(size);

    for (int i = size - 1, j = 0; i >= 0; i--, j++)
    {
        word2[j] = word1[i];
    }

    if (word2 == word1)
    {
        cout << "The word is palindrome.";
    }
    else
    {
        cout << "The word is not palindrome.";
    }

    return 0;
}
