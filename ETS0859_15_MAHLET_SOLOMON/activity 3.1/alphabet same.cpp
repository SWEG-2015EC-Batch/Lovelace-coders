#include<iostream>
using namespace std;
int main(){

int i=1;
char alpabet='a';
while (i<=3){
 int k=0;
 while(k<=i){
    cout<<" ";
    k++;
 }
  int j=3;
  while(j>=i){
    cout<<alpabet++; //change alpahabet to ++
    j--;
  }
alpabet++;
cout<<endl;
i++;




}




    return 0;
}
