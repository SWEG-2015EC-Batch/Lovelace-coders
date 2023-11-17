
# Problem Description:

Design an algorithm and write a code to read an employee name, weekly working hours,
bonus rate per hour and base salary and find the employees gross-salary, net salary and bonus payment.
(Hint: pension rate – 5%, tax: 15%).

# operation

1. Prompt the user to enter the employee name, weekly working hours, bonus rate per hour, and base salary.
2. Calculate the gross salary using the formula: gross_salary = (weekly_working_hours * base_salary) + (bonus_rate_per_hour * weekly_working_hours).
3. Calculate the pension deduction using the formula: pension_deduction = 0.05 * gross_salary.
4. Calculate the tax deduction using the formula: tax_deduction = 0.15 * gross_salary.
5. Calculate the net salary using the formula: net_salary = gross_salary - (pension_deduction + tax_deduction).
6. Calculate the bonus payment using the formula: bonus_payment = bonus_rate_per_hour * weekly_working_hours.
7. Display the gross salary, net salary, and bonus payment.


# Pseudo code
  Step 1: start
  Step 2: read employee name
  Step 4: read working hours
  Step 5: read bonus rate
  Step 6: read base salary
  Step 7: calculate gross salary = base salary + (bonus rate * working hours * 4)
  Step 8: calculate net salary = gross salary - gross salary(pension Rate) - gross salary(tax rate)
  Step 9: calculate bonus payment = bonus rate * working hours
  Step 5: print employee name ,gross salary, net salary, bonus payment
  Step 6: stop

 # Design the program

1. Variable declaration and initialization (What and How?)
  int workHr, baseS, bonusRt, grossS, bonusP;
  double netS, pensionRate(0.05), taxRate(0.15);

2. Reading input data (How)
  cout << "Please enter your full name: ";
  getline (cin, empName);
  cout << "Please enter the amout of hours you've worked: ";
  cin >> workHr;
  cout << "Please enter your base salary: ";
  cin >> baseS;
  cout << "Please enter your bonus rate per hour: ";
  cin >> bonusRt;

3. Perform operation - (How?)
  grossS = baseS + (workHr * bonusRt * 4); //we multiply by 4 because the work hour is in weeks
  netS = grossS - (grossS * pensionRate) - (grossS * taxRate);
  bonusP = bonusRt * workHr * 4;

4. Print results. (How?)
  cout << "Dear " << empName << '\n';
  cout << "Your gross salary for this month is: " << grossS << '\n';
  cout << "Your net salary for this month is: " << netS << '\n';
  cout << "Your bonus payment for the month is: " << bonu

