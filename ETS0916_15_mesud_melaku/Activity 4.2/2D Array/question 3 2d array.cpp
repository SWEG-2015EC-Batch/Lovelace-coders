#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int size, i = 0;
    cout << "Enter the total number of students: ";
    cin >> size;
    int score[size][6] = {};
    string score_status[size] = {};

    while (i < size)
    {
        cout << "Enter the score of student " << i + 1 << " Test: ";
        cin >> score[i][0];
        cout << "Enter the score of student " << i + 1 << " Assignment: ";
        cin >> score[i][1];
        cout << "Enter the score of student " << i + 1 << " Quiz: ";
        cin >> score[i][2];
        cout << "Enter the score of student " << i + 1 << " Project: ";
        cin >> score[i][3];
        cout << "Enter the score of student " << i + 1 << " Final: ";
        cin >> score[i][4];

        score[i][5] = score[i][0] + score[i][1] + score[i][2] + score[i][3] + score[i][4];

        if (score[i][5] > 100 || score[i][5] < 0)
        {
            cout << "The provided input is invalid. Please try again.\n";
            continue;
        }
        else
        {
            if (score[i][5] >= 80)
            {
                score_status[i] = "Excellent";
            }
            else if (score[i][5] >= 60 && score[i][5] < 80)
            {
                score_status[i] = "Very Good";
            }
            else if (score[i][5] >= 50 && score[i][5] < 60)
            {
                score_status[i] = "Fair";
            }
            else if (score[i][5] >= 40 && score[i][5] < 50)
            {
                score_status[i] = "Poor";
            }
            else if (score[i][5] < 40)
            {
                score_status[i] = "Fail";
            }
        }

        i++;
    }

    cout << "  "
         << "Student"
         << setw(10) << "Test"
         << setw(15) << "Assignment"
         << setw(10) << "Quiz"
         << setw(10) << "Project"
         << setw(10) << "Final"
         << setw(10) << "Total"
         << setw(15) << "Score Status" << endl;

    for (int j = 0; j < size; j++)
    {
        cout << "Student " << j + 1
             << setw(10) << score[j][0]
             << setw(15) << score[j][1]
             << setw(10) << score[j][2]
             << setw(10) << score[j][3]
             << setw(10) << score[j][4]
             << setw(10) << score[j][5]
             << setw(15) << score_status[j] << endl;
    }

    return 0;
}
