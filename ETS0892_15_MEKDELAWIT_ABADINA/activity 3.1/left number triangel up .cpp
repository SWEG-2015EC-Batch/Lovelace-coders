#include<iostream>
using namespace std;
int main(){
 int num;
 cout<<"enter num:";
 cin>>num;
 int i=1;
 while(i<=num){
    int k=0;
    while(k<=i){
        cout<<" ";
        k++;
    }
    int j=num;
    while(j>=i){
     cout<<i;
     j--;
    }

 cout<<endl;
 i++;






 }

    return 0;
}