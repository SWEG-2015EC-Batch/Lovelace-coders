#include <iostream>

using namespace std;

int main()
{
    float height ,weight ,BMI;
    cout << "enter a height";
    cin>>height;
    cout<< "enter a weight";
    cin>>weight;
    BMI=weight/(height*height);
    cout<<"the calculated BMI is"<<BMI;
    return 0;

}
