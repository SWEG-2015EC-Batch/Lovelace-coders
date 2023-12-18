//this is a code for calculating grade by reading test,assignment,quiz,project and final exam from the user.
#include <iostream>

using namespace std;

int main()
{
    double quiz,test,project,assignment,final_exam;
    cout<<" Enter quiz from 5% :"<<endl;
    cin>> quiz;
    while(quiz>5){
        cout<<" invalid value try again"<<endl;
        cin>>quiz;}
    cout<<" Enter test from 15% :"<<endl;
    cin>> test;
    while(test>15){
        cout<<" invalid value try again"<<endl;
        cin>>test;}
    cout<<" Enter project from 20% :"<<endl;
    cin>>project;
    while(project>20){
        cout<<" invalid value try again"<<endl;
        cin>>project;}
    cout<<" Enter assignment from 10% :"<<endl;
    cin>> assignment;
    while(assignment>10){
        cout<<" invalid value try again"<<endl;
        cin>>assignment;}
    cout<<" Enter final exam from 50% :"<<endl;
    cin>>final_exam;
    while(final_exam>50){
        cout<<" invalid value try again"<<endl;
        cin>>final_exam;}
        double mark= quiz + test + project + assignment + final_exam;
        cout<<" Total mark is: "<< mark<<endl;
        string grade;
    if(mark>=90){
            grade='A';}
        else if(mark>=80){
            grade='A';}
        else if(mark>=70){
            grade='B';}
        else if(mark>=60){
            grade='B';}
        else if(mark>=55){
            grade='c';}
        else if(mark>=45){
            grade='c';}
        else if(mark>=30){
            grade='D';}
        else
           {

            grade='F';}
          cout<<"Your grade is: "<< grade;
          if(mark>=90||mark>=70||mark>=55){
            cout<<"+"<<endl;
          }

    return 0;
}
