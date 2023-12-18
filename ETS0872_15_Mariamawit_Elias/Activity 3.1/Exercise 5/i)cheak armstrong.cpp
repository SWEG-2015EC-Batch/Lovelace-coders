#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,onum,rem,n=0,result=0;
    cout<<"enter postive number:";
    cin>>num;
    onum=num;
    while(onum!=0){
        onum/=10;
        ++n;
    
    }
    while(onum!=0){
        rem=onum%10;
        result+=pow(rem,n);
        onum/=10;
    }
    if(result==num){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;}