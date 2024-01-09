#include<iostream>
using namespace std;
int main(){
    int temp[8];
    int sum=0;
    int ava;
    for(int i=0;i<8;i++){
        cout<<"enter number"<<i+1<<endl;
        cin>>temp[i];
        sum+=temp[i];
    }
    ava=sum/8;
    cout<<"the avarage of this numbers is "<<ava<<endl;
    for(int i=0;i<8;i++){
        cout<<temp[i]<<endl;
    }
    return 0;
}