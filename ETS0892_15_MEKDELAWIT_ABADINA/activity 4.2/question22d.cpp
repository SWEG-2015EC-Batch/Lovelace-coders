#include<iostream>
using namespace std;
int main(){
    int num[3][3];
    int sumy[3];
    int pro[3];
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            cout<<"enter num"<<endl;
            cin>>num[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            cout<<num[i][k]<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<3;j++){
        pro[j]=1;
        
        for(int k=0;k<3;k++){
            
            pro[j]*=num[j][k];
            
        }
    }
    for(int k=0;k<3;k++){
        sumy[k]=0;
        for(int j=0;j<3;j++){
            sumy[k]+=num[j][k];
        }
    }
    for(int k=0;k<3;k++){
        cout<<"the product of row"<<k+1<<" "<<pro[k]<<endl;
    }
   for(int i=0;i<3;i++){
    cout<<"the sum of the colume"<<i+1<<" "<<sumy[i]<<endl;
   }


    return 0;
}