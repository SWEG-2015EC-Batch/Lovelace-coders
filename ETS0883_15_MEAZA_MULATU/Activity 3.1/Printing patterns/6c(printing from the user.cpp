// This is a code for printing pattern of numbers based on entered values
#include <iostream>

using namespace std;

int main()
{
    int n;//n refers to initial value of the pattern
    int m;//m refers to final value of the pattern
    cout<<" Enter the intial value of your pattern: "<<endl;
    cin>>n;
    cout<<" enter the final value of your pattern: "<<endl;
    cin>>m;

    for(int i=n;i<=m;i++){
      if(i%10==0)
        cout<<endl;
         cout<<i<<" ";
      }


    return 0;
}
