	#include <iostream>

using namespace std;

int main()
{
    double gross_salary,income_tax_rate,bonus_rate,overtime;
    int worked_hour;
    cout<<"enter gross salary"<<endl;
    cin>>gross_salary;
    cout<<"enter income tax rate"<<endl;
    cin>>income_tax_rate;
    cout<<"enter worked hour"<<endl;
    cin>>worked_hour;
    float pension;
    pension=0.07*gross_salary;
    cout<<"the pension will be"<<endl;
    double income_tax;
    income_tax=income_tax_rate*gross_salary;
    cout<<"the income tax will be"<<endl;
    if(worked_hour>40)
        overtime=(worked_hour-40)*bonus_rate;
        cout<<overtime<<endl;
    float net_salary;
    net_salary=(gross_salary-income_tax-pension)+overtime;
    cout<<"the net salary will be"<<endl;

    return 0;
}
