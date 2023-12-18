#include<iostream>
using namespace std;
int main(){
    int num,rem;
    cout<<"enter num:" ;
    cin>>num;
    int sum=0;
    while(num>0)  {
        rem=num%10;
        sum+=rem; 
    }
    cout<<"the sumof this digits is"<<sum;
    
    
    
    
    
    
    
    
    
    return 0;

}