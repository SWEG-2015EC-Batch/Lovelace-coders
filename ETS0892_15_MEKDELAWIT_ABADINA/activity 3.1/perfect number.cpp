#include<iostream>
using namespace std ;
int main(){
 int num,sum=0;
 cout<<"enter num:";
 cin>>num;
 for(int i=1;i<num;++i){
    if(num%i==0){
        sum+=i;
    }
 }

 if(sum==num){
    cout<<"perfect"<<endl;
 }
 else{
    cout<<"not perfect"<<endl;
 }






 return 0;
        
        
 }