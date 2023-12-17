//This is a code for calculating the net salary of the user
#include <iostream>

using namespace std;

int main()
{
   double base_salary,worked_hour,bonus_rate,over_time;
   cout<<" Enter base salary: ";
   cin>>base_salary;
   cout<<" Enter worked hour: ";
   cin>>worked_hour;
   cout<<" Enter bonus rate: ";
   cin>>bonus_rate;
   if(worked_hour>40)
    over_time=(worked_hour-40)*(bonus_rate)*(base_salary);
   else{
    over_time=0;
    }
   double gross_salary;
   gross_salary = over_time + base_salary;
   double pension = 0.07*base_salary;
   double income_tax_rate;
    if(gross_salary<200)
         income_tax_rate =0;
    else if(gross_salary>= 200 && gross_salary<=600)
        income_tax_rate=0.1;
    else if(gross_salary>= 600 && gross_salary<=1200)
        income_tax_rate=0.15;
    else if(gross_salary>= 1200 && gross_salary<=2000)
        income_tax_rate=0.20;
    else if(gross_salary>= 2000 && gross_salary<=3500)
        income_tax_rate=0.25;
    else if(gross_salary>=3500)
        income_tax_rate=0.30;
    double income_tax= (income_tax_rate)*(gross_salary);
    double net_salary= gross_salary-pension-income_tax;
        cout<<"over time is: "<<over_time<<endl;
        cout<<"gross salary is: "<<gross_salary<<endl;
        cout<<"pension is: "<<pension<<endl;
        cout<<"income tax rate: "<<income_tax_rate<<endl;
        cout<<"income tax is: "<<income_tax<<endl;
        cout<<"Net salary is: "<< net_salary<<endl;
    return 0;
}
