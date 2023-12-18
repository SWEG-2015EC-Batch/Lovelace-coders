#include <iostream>
using namespace std;
int main() {
	double test, quiz, project, assignment, finalexam;
	cout << "enter test out of 15" << endl;
	cin >> test;
	cout << "enter project out of 20" << endl;
	cin >> project;
	cout << "enter quiz out of 5" << endl;
	cin >> quiz;
	cout << "enter assignment out 10" << endl;
	cin >> assignment;

	cout << "enter final exam out of 50" << endl;
	cin >> finalexam;
		
	
	double grade;
	grade = assignment + project + finalexam + quiz + test;

	
	if (grade <= 100 && grade >= 90){
		cout << "A+" << endl;}
	else if (grade < 90 && grade >= 80){
		cout << "your grade is:" << "A" << endl;}
	else if (grade < 80 && grade >= 75){
		cout << "your grade is:" << "B+" << endl;}
	else if (grade < 75 && grade >= 60){
		cout << "your grade is:" << "B" << endl;}
	else if (grade < 60 && grade >= 55){
		cout << "your grade is:" << "C+" << endl;}
	else if (grade < 55 && grade >= 45){
		cout << "your grade is:" << "C" << endl;}
	else if (grade < 45 && grade >= 30){
		cout << "your grade is:" << "D" << endl;}
	else if (grade > 100){
		cout << "not correct grade " << endl;}
	else{
         cout << "your grade is:" << "F" << endl;}
	





	return 0;

}