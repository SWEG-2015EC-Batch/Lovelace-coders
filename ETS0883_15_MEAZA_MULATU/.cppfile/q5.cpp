#include <iostream>

using namespace std;

int main()
{
    int workinghour,bonusrateperhour,basesalary;
    string name;
    cout << "what is your name? ";
    cin>> name;
    cout <<" what is your working hour? ";
    cin>> workinghour;
    cout <<" what is your bonus rate per hour? ";
    cin>> bonusrateperhour;
    cout <<" what is base salary? ";
    cin>> basesalary;
    double gross_salary = basesalary + (workinghour * bonusrateperhour);
    double pension_deduction = 0.05* gross_salary;
    double tax_deduction = 0.15* gross_salary;
    double net_salary =  gross_salary-pension_deduction-tax_deduction;
    double bonus_payment = workinghour * bonusrateperhour;
    cout << "your gross_salary is "<<gross_salary<< endl
         << "your net_salary is "<<net_salary<< endl
         << "your bonus_payment is"<< bonus_payment << endl;
    return 0;
}
