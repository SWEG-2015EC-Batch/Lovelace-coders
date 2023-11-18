#include <iostream>

using namespace std;

int main()
{
   cout<< "enter height";
   double height,weight;
   cin>> height;
   cout<< "enter weight";
   cin>> weight;
   cout<< "BMI IS" << weight/(height*height);
    return 0;
}
