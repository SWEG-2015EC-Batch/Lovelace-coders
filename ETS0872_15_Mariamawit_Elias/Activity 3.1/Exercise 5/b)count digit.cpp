#include<iostream>
using namespace std;
int main(){
 int num;
 int i=0;
 cout<<"enter num:";
 cin>>num;
 
 while(num>0){
    num=num/10;
    i=i+1;
    
 }
 cout<<"the digits are:"<<i;






    return 0;
}