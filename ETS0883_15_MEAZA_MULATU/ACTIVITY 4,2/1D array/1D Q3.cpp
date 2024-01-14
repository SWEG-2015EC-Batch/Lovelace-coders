#include <iostream>

using namespace std;

int main()
{
   int first[2][3];
   int second[4][5];
   cout<<" Enter  numbers for the first 2D array:  "<<endl;
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cin>>first[i][j];}}
    cout<<" Enter  numbers for the first 2D array:  "<<endl;
    for(int i=0;i<2;i++){
     for(int j=0;j<3;j++){
        cin>>second[i][j];}}
    cout<<"first" <<"\t"<<"second"<<"\t"<<"sum"<<endl;
    int sum[5][5];
    for(int i=0;i<2;i++){
     for(int j=0;j<3;j++){
        sum[i][j]=first[i][j]+second[i][j];
    cout<<first[i][j]<<"\t"<<second[i][j]<<"\t"<<sum[i][j]<<endl;}}




    return 0;
}
