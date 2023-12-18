#include<iostream>
using namespace std;
int main(){
int num,digit,freq[10]={0};
  cout<<"enter the number:";
  cin>>num;
  while(num>0){
    digit=num%10;
    freq[digit]++;
    num=num/10;
  }
 cout<<"digit"<<endl;
 for(int i=0;i<10;i++){
    cout<<i<<"  "<<freq[i]<<endl;
 }
    return 0;
}
