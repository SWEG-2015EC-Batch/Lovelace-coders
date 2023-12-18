#include <iostream>
using namespace std;
int main() {

int test,quiz,project,assignment,final_exam,total;
cout<<"enter your test score out of 15"<<endl;
cin>>test;
cout<<"enter your quiz score out of 5"<<endl;
cin>>quiz;
cout<<"enter your project score out of 20"<<endl;
cin>>project;
cout<<"enter your assignment score out of 10"<<endl;
cin>>assignment;
cout<<"enter your final exam score out of 50"<<endl;
cin>>final_exam;
total=test+quiz+project+assignment+final_exam;
cout<<"your total result is "<<total<<endl;
if(total>=90)
    cout<<"your grade is A"<<endl;
else if(total>=80)
    cout<<"your grade is B"<<endl;
else if(total>=70)
    cout<<"your grade is C"<<endl;
else if(total>=75)
    cout<<"your grade is B+"<<endl;
else if(total>=60)
    cout<<"your grade is B"<<endl;
else if(total>=55)
    cout<<"your grade is C+"<<endl;
else if(total>=45)
    cout<<"your grade is C"<<endl;
else if(total>=30)
    cout<<"your grade is D"<<endl;
else
    cout<<"your grade is F"<<endl;


	return 0;
}
