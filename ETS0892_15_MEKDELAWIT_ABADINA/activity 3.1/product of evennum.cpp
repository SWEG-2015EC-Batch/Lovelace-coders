#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    int i=1;
    int rem;
    while(num>0){
       rem=num%10;
       
       if(rem%2==0){
        i*=rem;
       }
       else{
        i*=1;
       }
       num=num/10;
    }
 cout<<"the prodouct of this numbers is:"<<i;






    return 0;
}