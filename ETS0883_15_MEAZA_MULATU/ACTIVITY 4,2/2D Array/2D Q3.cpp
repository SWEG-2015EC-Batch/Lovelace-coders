#include <iostream>

using namespace std;

int main()
{
   float mark[4][5];
   float total_mark[2];
   float average=0;
   int m=1;
   string score_status[5]={"EXCCELLENT","VERY GOOD","FAIR","POOR","FAIL"};
   string score_level[5];
   for(int i=0;i<4;i++){
    cout<<"Enter quiz from 5%,test from 10%,assignment from 15%,mid from 20% and final from 50% for student "<<m++<<endl;
    average=0;
    for(int j=0;j<5;j++){
    cin>>mark[i][j];
    average+=mark[i][j];}
    total_mark[i]=average;
    if(total_mark[i]>=80){
     score_level[i]=score_status[0];}
   else if(total_mark[i]>=60&&total_mark[i]<80){
     score_level[i]=score_status[1];}
   else if(total_mark[i]>=50&&total_mark[i]<60){
     score_level[i]=score_status[2];}
   else if(total_mark[i]>=40&&total_mark[i]<50){
     score_level[i]=score_status[3];}
    else {
     score_level[i]=score_status[4];}
   }
    m=1;

   cout<<"\t"<<"student"<<"\t"<<" total mark "<<"\t"<<" score status "<<endl;
   for(int i=0;i<4;i++){

   cout<<"\t  "<<m++<<"\t  "<<total_mark[i]<<"\t\t  "<<score_level[i]<<endl;

   }
    return 0;
}
