#include <iostream>
#include <ctype.h>
using namespace std;

int main(void)
{
    char c;
    cout<<"Input character to be identified: ";
    cin>>c;

    if (isupper(c))
    {
        if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85)
            cout<<c<<" is an uppercase vowel"<<endl;
        else
            cout<<c<<" is an uppercase consonant"<<endl;
    }
    else if (islower(c))
    {
        if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
            cout<<c<<" is an lowercase vowel"<<endl;
        else
            cout<<c<<" is an lowercase consonant"<<endl;
    }
    else if (isdigit(c))
    {
        if (c % 2 == 0)
            cout<<c<<" is an even digit"<<endl;
        else
            cout<<c<<" is an odd digit"<<endl;
    }
    else
        cout<<c<<" is a special character"<<endl;

    return (0);
}
