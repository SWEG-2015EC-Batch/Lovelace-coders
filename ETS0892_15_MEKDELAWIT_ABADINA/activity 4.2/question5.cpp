#include<iostream>
using namespace std;
int main(){
    float volt[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<"enter volt"<<i+1<<endl;
        cin>>volt[i][j];}
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<volt[i][j]<<" ";
        }
        cout<<endl;
    }
}
    
