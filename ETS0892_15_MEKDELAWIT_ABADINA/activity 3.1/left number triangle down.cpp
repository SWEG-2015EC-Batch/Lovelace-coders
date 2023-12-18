#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter num:";
cin>>num;
for(int i=1;i<=num;i++){
    for( int k=num-1;k>=i;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<i;
    }
    cout<<endl;
}












    return 0;
}