#include <iostream>

using namespace std;

int main()
{
   double num1,num2,exit;
   char op;// op stands for operator
   do{
    cout<<"enter num1: "<<endl;
    cin>>num1;
    cout<<"enter num2: "<<endl;
    cin>>num2;
    cout<<"enter operator: "<<endl;
    cin>>op;
    switch(op)
    {
    case'+':
        cout<<"the sum of the two numbers is: "<<num1+num2<<endl;
        break;

        case'-':
        cout<<"the difference  of the two numbers is: "<<num1-num2<<endl;
        break;
        case'*':
        cout<<"the product of the two numbers is: "<<num1*num2<<endl;
        break;

    case'/':
        cout<<"the quotient of the two numbers is: "<<num1/num2<<endl;
        break;
    default:
        break;
    }
    cout<<"to exit enter 0 to continue enter any number different from 0"<<endl;
    cin>>exit;
    if(exit==0){
        cout<<"exit"<<endl;}
   }while(exit!=0);
   return 0;
}
