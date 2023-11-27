#include <iostream>

using namespace std;

int main()
{
    float height, weight, BMI ;
    char gender;

    cout << "enter a height  in meter";
    cin >> height;
    cout << "enter a weight in kilogram";
    cin >> weight;
    BMI = weight / (height * height);
    cout << "the calculated BMI is:" << BMI<<endl;

    cout << "enter your gender" << endl;
    cin >> gender;
    if(BMI>30)
        cout<<"obesity"<<endl;

    else if(gender=='f') {
        if (BMI < 18.5)
            cout << "under weigth" << endl;
        else if (BMI > 18.5 && BMI < 24.5)
            cout << "netural weight" << endl;
        else if (BMI > 25 && BMI < 29.9)
            cout << "over weight" << endl;
    }
        else if(gender=='m'){
            if(BMI<20.5)
                cout<<"under weight"<<endl;
            else if (BMI>20.5 && BMI<25.9)
                cout<<"neutral weight"<<endl;
            else if( BMI<26&& BMI<29.9)
                cout<<"over weight"<<endl;



    }

    return 0;

}
