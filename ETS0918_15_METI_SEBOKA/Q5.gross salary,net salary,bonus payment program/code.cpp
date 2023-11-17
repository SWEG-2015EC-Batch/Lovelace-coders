//gross salary,net salary,bonus payment program
#include <iostream>                                                                                                                                                                                              
using namespace std;
int main(){

string employee_name;
    float weekly_working_hours, bonus_rate_per_hour, base_salary;
    
   /* cout << "Enter employee name: ";
    cin >> employee_name;
    
    cout << "Enter weekly working hours: ";
    cin >> weekly_working_hours;
    
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate_per_hour;
    
    cout << "Enter base salary: ";
    cin >> base_salary;
    
    float gross_salary = (weekly_working_hours * base_salary) + (bonus_rate_per_hour * weekly_working_hours);
    float pension_deduction = 0.05 * gross_salary;
    float tax_deduction = 0.15 * gross_salary;
    float net_salary = gross_salary - (pension_deduction + tax_deduction);
    float bonus_payment = bonus_rate_per_hour * weekly_working_hours;
    
    cout << "Gross salary: " << gross_salary << endl;
    cout << "Net salary: " << net_salary << endl;
    cout << "Bonus payment: " << bonus_payment << endl;
return 0;
}
