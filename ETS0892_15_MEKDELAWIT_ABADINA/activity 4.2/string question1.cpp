#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"enter name"<<endl;
    getline(cin,name);
    int vowel=0;
    int consonate=0;
    for(int i=0;i<name.length();i++){
        char ch=tolower(name[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        }
            else {
                consonate++;
            }
    }
   cout<<"number of consonate:"<<consonate<<endl;
   cout<<"number of vowel:"<<vowel<<endl;




    return 0;
}