#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char letter;
    cout <<"enter a letter\t";
    cin>> letter;
    if (islower(letter))
    cout<<" the letter in uppercase is" <<char(toupper(letter))<<endl;
    else
     cout <<"the letter in lowercase is " <<char(tolower(letter))<<endl;
    return 0;
}
