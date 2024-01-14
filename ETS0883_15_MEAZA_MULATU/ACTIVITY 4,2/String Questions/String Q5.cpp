#include <iostream>

using namespace std;

int main()
{
   string text;
   int vowel=0;
   int consonent=0;
   int number=0;
   int specialch=0;
   cout<<"Enter text: "<<endl;
   getline(cin,text);
   for(int i=0;i<text.size();i++){
    if(text[i]>='a'&&text[i]<='z'||text[i]>='A'&&text[i]<='Z'){
        if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U'){
          vowel++;  }
        else{consonent++;}}
    else if(text[i]>=0&&text[i]<=9){
        number++;}
    else{
        specialch++;}}
    cout<<"number of vowels: "<<"\t"<<vowel<<endl;
    cout<<"number of consonents: "<<"\t"<<consonent<<endl;
    cout<<"number of digits: "<<"\t"<<number<<endl;;
    cout<<"number of special characters: "<<"\t"<<specialch<<endl;

    return 0;
}
