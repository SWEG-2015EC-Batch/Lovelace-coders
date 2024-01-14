#include <iostream>

using namespace std;

int main()
{
    string word;
    cout<<"Enter any word: "<<" ";
    getline(cin,word);
    for(int i=0;i<word.size();i++){
        if(word[i]>='a'&&word[i]<='z'||word[i]>='A'&&word[i]<='Z'){
            cout<<word[i];}
        else{continue;}
    }
    return 0;
}
