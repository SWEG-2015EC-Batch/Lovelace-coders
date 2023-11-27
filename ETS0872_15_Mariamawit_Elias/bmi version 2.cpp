#include <iostream>

using namespace std;

int main()
{
    float height ,weight ,BMI;
    char gender;

    cout << "enter a height";
    cin>>height;
    cout<< "enter a weight";
    cin>>weight;
    BMI=weight/(height*height);
    cout<<"the calculated BMI is"<<BMI<<endl;
    cout << "enter your gender"<<endl;
    cin>>gender;
    if(BMI>=30)
        cout<<"obesity"<<endl;
   else if(gender=='M'){
           if(BMI<18.5)
           cout<<"under weight"<<endl;
    else if(BMI>18.5&&BMI<24.9)
        cout<<"netural weight"<<endl;
    else if(BMI>25&&BMI<29.9)
        cout<<"over weight"<<endl;
    else if(BMI>=30)
        cout<<"obesity"<<endl;                               }
 else if(gender=='F')  {
    if(BMI<20.5)
    cout<<"under weight"<<endl;
 else if(BMI>20.5&&BMI<25.9)
    cout<<"neutal weight"<<endl;
 else if(BMI>26&&BMI<29.9)
    cout<<"over weight"<<endl;
                                 }
    return 0;
}
