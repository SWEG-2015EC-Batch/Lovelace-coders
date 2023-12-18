#include <iostream>
#include <conio.h>

using namespace std;

int main(void)
{
    int num1, num2, numberOfOp, result;
    char oper;

    do {
        cout<<"Input two numbers: ";
        cin>>num1>>num2;

        cout<<"Input an operator(+, -, *, /): ";
        cin>>oper;

        switch (oper)
        {
            case '+':
                result = num1 + num2;
                cout<<"Result is "<<result<<"\n"<<endl;
                break;
            case '-':
                result = num1 - num2;
                cout<<"Result is "<<result<<"\n"<<endl;
                break;
            case '*':
                result = num1 * num2;
                cout<<"Result is "<<result<<"\n"<<endl;
                break;
            case '/':
                result = num1 / num2;
                cout<<"Result is "<<result<<"\n"<<endl;
                break;
            default:
                cout<<"Please input a proper operator"<<endl;
                break;
                
        
        }
        cout<<"To exit press 0, to continue press any other number: ";
        cin>>numberOfOp;

        if (numberOfOp == 0)
        {
            cout<<"Program Exited"<<endl;
        }
    } while (numberOfOp != 0);

    return (0);

}
