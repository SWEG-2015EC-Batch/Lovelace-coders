#include<iostream>
using namespace std;
int main(){
     int first[3][4];
     int second[3][4];
     int result[3][4];
     cout<<"first"<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<"enter number"<<endl;
            cin>>first[i][j];
        }
     }
     cout<<"second"<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<"enter number"<<endl;
            cin>>second[i][j];
        }
        
     }

     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            result[i][j]=first[i][j]+second[i][j];
        }
         
         }
       cout<<"result"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
         }
 return 0;
}