#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   float total_mark[5];
   int m=1;
   string score_status[5]={"EXCCELLENT","VERY GOOD","FAIR","POOR","FAIL"};
   string score_level[5];
   for(int i=0;i<5;i++){
   cout<<"Enter the total mark of student  "<<m++<<endl;
   cin>>total_mark[i];

   if(total_mark[i]>=80){
     score_level[i]=score_status[0];}
   else if(total_mark[i]>=60&&total_mark[i]<80){
     score_level[i]=score_status[1];}
   else if(total_mark[i]>=50&&total_mark[i]<60){
     score_level[i]=score_status[2];}
   else if(total_mark[i]>=40&&total_mark[i]<50){
     score_level[i]=score_status[3];}
    else {
     score_level[i]=score_status[4];}}
     m=1;

   cout<<"\t"<<"student"<<"\t"<<" total mark "<<"\t"<<" score status "<<endl;
   for(int i=0;i<5;i++){

   cout<<"\t  "<<m++<<"\t  "<<total_mark[i]<<"\t\t  "<<score_level[i]<<endl;

   }

    return 0;
}
