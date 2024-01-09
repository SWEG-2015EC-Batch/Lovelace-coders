#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   float toatl_score[10];
   string grade[10];
   for(int i=0;i<10;i++){
    cout<<"enter total sore of student"<<i+1<<endl;
    cin>>toatl_score[i];
    if(toatl_score[i]>=80){
        grade[i]="excellent";
    }
        else if(toatl_score[i]<=79&&toatl_score[i]>=60){
            grade[i]="very good";
            }
            else if(toatl_score[i]<=59&&toatl_score[i]>=50){
              grade[i]="fair";
             }
                else if(toatl_score[i]<=497&&toatl_score[i]>=40){
                    grade[i]="poor";
                    }
                    else if(toatl_score[i]<=39){
                    grade[i]="fail";
                
                 }
   }
   cout<<"toatl_score"<<setw(8)<<"grade"<<endl;
   for(int i=0;i<10;i++){
    cout<<toatl_score[i]<<setw(16)<<grade[i];
    cout<<endl;
   }
    return 0;
}