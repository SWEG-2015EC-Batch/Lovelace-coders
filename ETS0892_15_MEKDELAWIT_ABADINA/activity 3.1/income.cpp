#include<iostream>
using namespace std;
int main() {
	    double gross_salary;

	    cout << "enter gross_salary:";
	    cin >> gross_salary;
	
	    double pension;
	    pension = 0.07 * gross_salary;
	    cout << "the calculated pension is:" << pension << endl;

	
	    double worked_hour, overtime,bounce_rate;
	    overtime = 0;
	    cout << "enter worked_hour:";
	    cin >>worked_hour;
	    cout << "enetr the bounce rate:";
	    cin >> bounce_rate;
	    if (worked_hour > 40) {
		overtime = (worked_hour - 40) * (bounce_rate);

	    }
	    cout << "the calculated overtime is:"<<overtime << endl;
		


	    double incomerate, taxrate;
	        incomerate = 0;
	    taxrate = 0;
	    if (gross_salary > 0 && gross_salary < 200){
		taxrate = 0;}
	    else if (gross_salary > 200 && gross_salary < 600){
		taxrate = 0.1;}
	    else if (gross_salary > 600 && gross_salary < 1200){
		taxrate = 0.15;}
	    else if (gross_salary > 1200 && gross_salary < 2000){
		taxrate = 0.2;}
	    else if (gross_salary > 2000 && gross_salary < 3500){
		taxrate = 0.25;}
	    else if (gross_salary >= 3500){
		taxrate = 0.3;}

	    incomerate = taxrate * gross_salary;
        cout << "the calculated incomerate:" << incomerate <<endl;


        double net_salary;
        net_salary = (gross_salary - incomerate - pension) + overtime;


    cout << "the calculated net_salary is:" << net_salary;















	return 0;
}