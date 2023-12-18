#include<iostream>
using namespace std;
int main(){
    string figure;
    int row;
    cout<<"enter type of figure you want";
    cin>>figure;
    cout<<"enter number of row";
    cin>>row;
    
    if(figure=="h.p"||figure=="half piramid"){
      for(int i=1;i<=row;i++)
      {
        for(int k=row-1;k>=i;k--){
            cout<<" ";
        }
        for(int j=1;j<=1;j++){
        cout<<"*";}
        cout<<endl;
      }
      


    }
    else
     cout<<"error";
    
    
   




    return 0;
}  