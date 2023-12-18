#include<iostream>
using namespace std;
int main(){
    char alpabet='a';
 for(int i=1;i<=3;i++){  
    for(int k=2;k>=i;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
     cout<<alpabet;
    }
  cout<<endl;
  alpabet++;

 }



    return 0;
}