#include <iostream>

using namespace std;

int main()
{
    int number_of_people;
    cout << "enter number of people: " << endl;
    cin >> number_of_people;
    for (int i = 1;i <= number_of_people;i++) {
        cout << "\n person-" << i << endl;


        cout << "enter height of person " << i << endl;
        double height, weight;
        cin >> height;
        cout << "enter weight of person " << i << endl;
        cin >> weight;
        double BMI = weight / (height * height);
        cout << "BMI  IS: " << BMI << endl;
        char gender;
        cout << "enter your gender: ";
        cin >> gender;
        if (BMI >= 30)
            cout << "your weight is obesity" << endl;


        else if (gender == 'F') {
            if (BMI < 18.5)
                cout << "you are under weight" << endl;

            else if (BMI >= 18.5 && BMI <= 24.9)
                cout << "you are normal weight" << endl;

            else if (BMI >= 25 && BMI <= 29.9)
                cout << "you are over weight" << endl;
        }


        else if (gender == 'M') {
            if (BMI < 20.5)
                cout << "you are under weight" << endl;

            else if (BMI >= 20.5 && BMI <= 25.9)
                cout << "you are normal weight" << endl;

            else if (BMI >= 26 && BMI <= 29.9)
                cout << "you are over weight" << endl;

        }


    }

    return 0;
}