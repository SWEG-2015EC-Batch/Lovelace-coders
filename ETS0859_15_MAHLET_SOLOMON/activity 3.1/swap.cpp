#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int num;
 cout<<"enter num:";
 cin>>num;
 int first,last,tem,a,b,swap;
 
 tem=log(num);
 first=num/(pow(num,tem));
 last=num%10;
 a=first*(pow(num,tem));
 b=num % a;
 num=b/10;
 swap=last*(pow(num,tem))+(num*10+first);
 cout<<"after swapinf the first and the last digit"<<swap;




    return 0;
}
