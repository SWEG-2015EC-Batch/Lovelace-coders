#include<iostream>
using namespace std;
int main(){
 int num;
 cout<<"enter num:";
 cin>>num;
 int i=1;
 int x=1;
 while(i<=num){
  int j=1;
  while(j<=i){
    cout<<x++;
    j++;
  }
  cout<<endl;
  i++;
 }








    return 0;
}