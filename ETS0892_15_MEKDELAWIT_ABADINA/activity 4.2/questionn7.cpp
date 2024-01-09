#include<iostream>
using namespace std;
int main(){
    int numbers[5];
    int num[5];
    for(int i=0;i<5;i++){
        cout<<"enter number"<<i+1<<endl;
        cin>>numbers[i];
        if(numbers[i]%2==0){
            num[i]=numbers[i];
        }
            else{
                num[i]=0;
            }
            

    }
    cout<<"print in reverse"<<endl;
   for(int i=4;i>=0;i--){
    cout<<num[i]<<endl;
   }
   
    
    return 0;
}