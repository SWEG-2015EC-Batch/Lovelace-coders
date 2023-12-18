#include<iostream>
using namespace std;
int main(){
 int num;
 cout<<"enter num:";
 cin>>num;
 int last,sum,first;
 last=num%10;
 
 first=num;
 while(first>=10){
     first=first/10;
     }
 
 sum=first+last;
 cout<<"the sum of the last and the first number is:"<<sum<<endl;
 cout<<"the first digit is:"<<first<<endl;
 cout<<"the last digits is:"<<last<<endl;





    return 0;
}
