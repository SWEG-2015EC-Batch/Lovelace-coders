#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    int sum=0;
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){
            cout<<"enternum"<<endl;
            cin>>arr[j][i];
        }

    }
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){
            if(arr[j][i]%2==0){
                sum+=arr[j][i];
            }
        }
    }
     cout<<"the sum of this numbers "<<sum<<endl;
    for(int j=0;j<3;j++){
        for(int k=0;k<4;k++){
            if(arr[j][k]%2==0){
                cout<<arr[j][k]<<" ";
            }
                else if(arr[j][k]%2!=0){
                    cout<<"*"<<" ";
                 }
            
        }
        cout<<endl;
    }
}
