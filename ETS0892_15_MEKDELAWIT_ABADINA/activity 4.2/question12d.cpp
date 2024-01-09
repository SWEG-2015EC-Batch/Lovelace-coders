#include<iostream>
using namespace std;
int main(){
    int first[5];
    int second[5];
    bool similar=true;
    cout<<"first"<<endl;
    for(int i=0;i<5;i++){
        cout<<"enter first elements"<<endl;
        cin>>first[i];

    }
    cout<<"second"<<endl;
    for(int j=0;j<5;j++){
        cout<<"enter second element"<<endl;
        cin>>second[j];
    }
    for(int k=0;k<5;k++){
        if(first[k]!=second[k]){
            similar=false;
            break;
        }
    }
   if(similar){
    cout<<"they are the same"<<endl;
   }
    else{
        cout<<"not similar"<<endl;
    }


    return 0;
}