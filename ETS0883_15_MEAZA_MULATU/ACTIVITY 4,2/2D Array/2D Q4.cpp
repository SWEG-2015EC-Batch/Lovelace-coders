#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int number[3][4];
   int sum=0;
   cout<<"Enter elements for your 2D array: "<<endl;
   for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
       cin>>number[i][j];}}

    cout<<"The even numbers are "<<endl;
    for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
     if(number[i][j]%2==0){
       cout<<number[i][j]<<" \t  ";
      sum+=number[i][j];}
    }
     cout<<endl;}
     cout<<"The sum of even numbers is: "<<sum<<endl;

    return 0;
}
