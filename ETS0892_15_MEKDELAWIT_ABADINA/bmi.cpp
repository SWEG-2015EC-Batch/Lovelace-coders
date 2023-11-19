#include <iostream>

using namespace std;

int main()
{
    float height ,weight ,BMI;
    cout << "enter a height in meter";
    cin>>height;
    cout<< "enter a weight in kilogram";
    cin>>weight;
    BMI=weight/(height*height);
    cout<<"the calculated BMI is"<<BMI;
    return 0;

}
