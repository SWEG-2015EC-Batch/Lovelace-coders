// this is a code for adding the elements of an array
#include <iostream>

using namespace std;

int main()
{
  int temp[8];
  double sum=0;
  for(int i=0;i<8;i++){
    cout<<"Enter any numbers: "<<endl;
    cin>>temp[i];
    sum+=temp[i];}
    cout<< "The sum of the numbers is:  "<<sum;
    cout<<" The average of the numbers is:  "<<sum/10;
    return 0;
}
