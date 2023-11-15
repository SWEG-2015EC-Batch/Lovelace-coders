#include <iostream>

using namespace std;
int main()
{
  int WorkingHours, bonus;
  int salary;
  string name;
  cout << "what is your name ?";
  cin >> name;
  cout << "what is your weekly working hour ? ";
  cin >> WorkingHours;
  cout << "what is your bonus rate per hour ? ";
  cin >> bonus;
  cout << "what is your base salary ?";
  cin >> salary;
  double gross_salary = salary + (WorkingHours * bonus);
  double pension_deduction = 0.05 * gross_salary;
  double tax_deduction = 0.15 * gross_salary;
  double net_salary = gross_salary - pension_deduction - tax_deduction;
  double bonus_payment = WorkingHours * bonus;
  cout << "your gross salary is " << gross_salary << endl
    << "your net salary is " << net_salary << endl
    << "your bonus bonus payment " << bonus_payment << endl;
  return 0;
}
