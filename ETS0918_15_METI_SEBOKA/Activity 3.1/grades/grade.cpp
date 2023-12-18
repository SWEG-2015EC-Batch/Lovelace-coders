#include <iostream>
using namespace std;

int main(void)
{
    int num_grade, test, quiz, project, assignment, final_exam;
    string char_grade;

    cout<<"Enter your score of test(15%), quiz(5%), project(20%), assignment(10%), final exam(50%): ";
    cin>>test>>quiz>>project>>assignment>>final_exam;

    num_grade = test + quiz + project + assignment + final_exam;

    if (num_grade >= 90)
        char_grade = "A+";
    else if (num_grade >= 80)
        char_grade = "A";
    else if (num_grade >= 75)
        char_grade = "B+";
    else if (num_grade >= 60)
        char_grade = "B";
    else if (num_grade >= 55)
        char_grade = "C+";
    else if (num_grade >= 45)
        char_grade = "C";
    else if (num_grade >= 30)
        char_grade = "D";
    else
        char_grade = "F";

    cout<<"You got a/an "<<char_grade<<endl;

    return (0);
}
