#include<iostream>
using namespace std;
int main(){
    int num,sum=0,onum,digit;
    cout<<"enter num:";
    cin>>num;
    while(num!=0){
       digit=num%10;
       int factorial=1;
       for(int i=1;i<=digit;++i){
        factorial*=i;
       }
       sum+=factorial;
       num/=10;
    }
    if(sum==onum){
        cout<<"strong number"<<endl;
    }
    else{
        cout<<"not strong number"<<endl;
    }







    return 0;
}
