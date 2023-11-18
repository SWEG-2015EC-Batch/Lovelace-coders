//BMI Calculation program
#include<iostream>
using namespace std;
int main(){   
  double weight, height, BMI;
     cout << " enter weight in kilograms: ";
    cin >> weight;
    cout << " enter your height in meters: ";
    cin >> height;
    BMI = weight / (height * height);//calculate BMI
   cout << "the BMI is: " << BMI;
return 0;
}
