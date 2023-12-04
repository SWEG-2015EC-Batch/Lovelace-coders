#include <iostream>
using namespace std;
int  main() {
  double num1, num2;
  double exit;
  char op;
  do {
    cout << "enter num1:" << endl;

    cin >> num1;
    cout << "enter num2:" << endl;

    cin >> num2;
    //op stands for operator.
    cout << "enter the operator" << endl;
    cin >> op;


    switch (op)
    {
    case'+':
      cout << "the sum of this two numbers is:" << num1 + num2 << endl;
      break;
    case'-':
      cout << "the difference of this two number is:" << num1 - num2 << endl;
      break;
    case '*':
      cout << "the product of this two numbers is:" << num1 * num2 << endl;
      break;
    case'/':
      cout << "the division of this two number is:" << num1 / num2 << endl;
      break;


    default:
      break;
    }
    cout << "to exit enter 0" << endl;
    cin >> exit;
    if (exit == 0)
      cout << "exit" << endl;

  } while (exit != 0);
  return 0;
}
