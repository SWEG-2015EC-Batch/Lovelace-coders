#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{char letter;
cout<< "enter letter";
cin>>letter;
    if(islower(letter))
        cout<<"the letter is in upper case is"<<char(toupper(letter))<<endl;
        else
    cout<<"the letter in lower case"<<char(tolower(letter))<<endl;

    return 0;
}
