#include <iostream>

using namespace std;

int main()
{
    int i=1;
    float height ,weight ,BMI;
    char gender;
    int number_of_people;
    cout<<"number_of_people"<<endl;
    cin>>number_of_people;
    for(int i=1;i<=number_of_people;i++){
        cout<<"\n person-"<<i<<endl;

    cout << "enter a height of person "<<i<<endl;
    cin>>height;
    cout<< "enter a weight of person "<<i<<endl;
    cin>>weight;
    BMI=weight/(height*height);
    cout<<"the calculated BMI of person is"<<BMI<<i<<endl;
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
    }
    return 0;
}
