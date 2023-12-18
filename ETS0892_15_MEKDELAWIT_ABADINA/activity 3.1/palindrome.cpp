#include<iostream>
using namespace std ;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    int rev=0,digit,n;
    n=num;
    while(num!=0){
        digit=num%10;
        rev=(rev*10)+digit;
        num/=10;
    }
 if(n==rev){
        cout<<"palindorme";
      }
 else {
        cout<<"not palindorm";
    }











    return 0;
}