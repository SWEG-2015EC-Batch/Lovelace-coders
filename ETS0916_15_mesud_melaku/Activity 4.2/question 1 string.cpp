#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter the word: \n";
    getline(cin, word);
    int size = word.length(), vowel = 0, consonant = 0;

    for (int i = 0; i < size; i++)
    {
        if (isalpha(word[i]))
        {
            word[i] = tolower(word[i]);
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    cout << "The number of vowels in your sentence is " << vowel << endl;
    cout << "The number of consonants in your sentence is " << consonant;

    return 0;
}
