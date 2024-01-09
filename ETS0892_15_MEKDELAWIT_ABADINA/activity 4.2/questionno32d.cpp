#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num_stud;
    cout<<"enter the number of student"<<endl;
    cin>>num_stud;
    int test[num_stud],quize[num_stud],project[num_stud],assignment[num_stud],final[num_stud],total_score[num_stud];
    string grade[num_stud];
    for(int i=0;i<num_stud;i++){
        cout<<"student"<<i+1<<endl;
        cout<<"enter test result"<<endl;
        cin>>test[i];
        cout<<"enter quize result"<<endl;
        cin>>quize[i];
        cout<<"enter assignemnt result"<<endl;
        cin>>assignment[i];
        cout<<"enter project result"<<endl;
        cin>>project[i];
        cout<<"enter final result"<<endl;
        cin>>final[i];
       total_score[i]=final[i]+assignment[i]+test[i]+project[i]+quize[i];
       if(total_score[i]>=80){
            grade[i]="excellent";
       }
            else if(total_score[i]<80&&total_score[i]>=60){
                grade[i]="very good";
            }
                else if(total_score[i]<60&&total_score[i]>=50){
                    grade[i]="fair";
                }
                    else if( total_score[i]<50&&total_score[i]>=40){
                        grade[i]="poor";
                    }
                        else if(total_score[i]<40){
                            grade[i]="fail";
                        }
    }
    cout<<"total_score"<<setw(10)<<"grade"<<endl;
  for(int i=0;i<num_stud;i++){
    cout<<total_score[i]<<setw(16)<<grade[i]<<endl;
  }

    return 0;
}