#include <iostream>

using namespace std;

int main()
{
   float number[2][3];
   float sum=0;
   float product=1;
   cout<<"Enter numbers for for your 2D array"<<endl;
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cin>>number[i][j];}}
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        sum+=number[i][j];
        product*=number[i][j];}}
    cout<<"The product of rows is : "<<product<<endl;
    cout<<"The sum of columns is : "<<sum<<endl;

    return 0;
}
