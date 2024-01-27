#include<iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    
    int n;
    cout << "enter thr number of students" << endl; //at this line we ask the user to enter how many students did he want enter
    cin >> n;
    int x;
    string studentID[100];// this is our declazation and intiation for our program
    double mark[100][3];
    double avarage[100];
    string grade[100][3];
    string id[100];

    double grade_value[100][3], crdit_hour[3], total_crdith = 0, total, cgpa[100],rgpa[100],box,vgpa[100]; 
    for (int i = 0;i < 3;i++) { //at this for loop we try to accept credit hour of the course
        cout << "enter credit hour of course " << i + 1 << endl;
        cin >> crdit_hour[i];
        total_crdith += crdit_hour[i];
    }
    for (int i = 0;i < n;i++) {  // at this for loop we ask to enter ID of students 
        cout << "enter your ID number of " << i + 1 << endl;
        cin >> studentID[i];
        double sum = 0;
        for (int j = 0;j < 3;j++) { // the it will titrate and ask the grade for each coures and in turn it will give as grade value for each coure
                                    // grade value mean weight of the grade of the student.
            cout << "enter mark of course " << j + 1 << endl;
            cin >> mark[i][j];
            if (mark[i][j] >= 85) {
                grade[i][j] = 'A';
                grade_value[i][j] = 4;
            }
            else if (mark[i][j] < 85 && mark[i][j] >= 75) {
                grade[i][j] = "B+";
                grade_value[i][j] = 3.5;
            }
            else if (mark[i][j] < 75 && mark[i][j] >= 70) {
                grade[i][j] = 'B';
                grade_value[i][j] = 3;
            }
            else if (mark[i][j] < 70 && mark[i][j] >= 60) {
                grade[i][j] = "c+";
                grade_value[i][j] = 2.5;
            }
            else if (mark[i][j] < 60 && mark[i][j] >= 50) {
                grade[i][j] = 'C';
                grade_value[i][j] = 2;
            }
            else if (mark[i][j] < 50 && mark[i][j] >= 40) {
                grade[i][j] = 'D';
                grade_value[i][j] = 1.5;
            }
            else {
                grade[i][j] = 'F';
                grade_value[i][j] = 0;
            }


            sum += mark[i][j];       // after the user enter all the mark of each coure it take we find sum and from the sum we try to find the avarge of the sudent

        }
        avarage[i] = sum / 3;// the avarge score of the student
    }

    for (int i = 0;i < n;i++) { //at this point our program will calculte the cgpa for the number of student that the user enterd
        total = 0;
        for (int j = 0;j < 3;j++) {
            total += grade_value[i][j] * crdit_hour[j];
        }
        cgpa[i] = total / total_crdith;

    }
    
    //the main part of our project is this one that we print the  mark of each course, avarage ,and cgpa of the number of students that the user enterd
    cout<<setw(75)<<"STUDENT'S MARK SHEET"<<endl;
    cout<<"_______________________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(10)<<"stud. ID"<<setw(30)<<"INT .SWEG"<<setw(30)<<"FOPI"<<setw(30)<<"CALCULAUS"<<setw(30)<<"avarage"<<setw(30)<<"CGPA"<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"_________________________________________________________________________________________"<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"\t"<<"mark"<<":"<<"grade"<<setw(29)<<"mark"<<":"<<"grade"<<setw(29)<<"mark"<<":"<<"grade"<<setw(29)<<endl;
    cout<<"_______________________________________________________________________________________________________________________________________________________________"<<endl;
    for (int i = 0;i < n;i++) {

        cout << setw(10) << studentID[i] << setw(31) << mark[i][0] << ":" << grade[i][0] << setw(31) << mark[i][1] << ":" << grade[i][1] << setw(31) << mark[i][2] << ":" << grade[i][2] << setw(20) << avarage[i] << setw(25) << cgpa[i] << endl;
    }
    do {    // this is our do while loop we use this for two main purose th efirst onr is for printing specific students mark,cgpa and avarage also we use this to
            //print tope five scores and scores
        int choice;
        cout << " enter 1 to see individual grade " << endl;
        cout << " enter 2 to see top 5 value " << endl;

        cout << "whose result do you want to see enter their id ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "whose result do you want to see enter their id ";
            cin >> id[0];
            for (int i = 0;i < 3;i++) {
                if (id[0] == studentID[i]) {
                    cout << setw(10) << studentID[i] << setw(31) << mark[i][0] << ":" << grade[i][0] << setw(31) << mark[i][1] << ":" << grade[i][1] << setw(31) << mark[i][2] << ":" << grade[i][2] << setw(20) << avarage[i] << setw(25) << cgpa[i] << endl;

                }
            }
            cout << " enter 0 if you want to continue :  ";
            cin >> x;
            break;
        case 2:
            cout << " Top 5 students are " << endl;
            for (int i = 0;i < n;i++) {
                rgpa[i] = cgpa[i];// to copy value of cgpa to another array
            }
            for (int i = 0;i < n;i++) {
                for (int j = i + 1;j < n;j++) {

                    if (rgpa[i] < rgpa[j]) {
                        box = rgpa[i]; // to swap a value with ascending order
                        rgpa[i] = rgpa[j];
                        rgpa[j] = box;

                    }
                }
            }
            for (int j = 0;j < 5;j++) {
                for (int i = 0;i < n;i++) {
                   
                        if (rgpa[j] == cgpa[i]) {
                            cout << setw(10) << studentID[i] << setw(31) << mark[i][0] << ":" << grade[i][0] << setw(31) << mark[i][1] << ":" << grade[i][1] << setw(31) << mark[i][2] << ":" << grade[i][2] << setw(20) << avarage[i] << setw(25) << cgpa[i] << endl;
                            break;
                    }
                }
                cout << endl;
            }
           
            cout << " enter 0 if you want to continue :  "; 
            cin >> x;
            break;
        }
        } while (x == 0);
       
    

  
    return 0;
}
