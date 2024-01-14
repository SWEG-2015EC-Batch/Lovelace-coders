#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    unsigned int num;
    cout << "for  how many students you want to to calculate the status: ";
    cin >> num;
    double total_mark[num] = {};
    string score_status[num];
    cout << "Enter the total mark of the students \n";
    while (i < num)
    {
        cin >> total_mark[i];
        if (total_mark[i] >= 80 && total_mark[i] <= 100)
        {
            score_status[i] = "Excellent";
        }
        else if (total_mark[i] >= 60 && total_mark[i] < 80)
        {
            score_status[i] = "Very Good";
        }
        else if (total_mark[i] >= 50 && total_mark[i] < 60)
        {
            score_status[i] = "Fair";
        }
        else if (total_mark[i] >= 40 && total_mark[i] < 50)
        {
            score_status[i] = "poor";
        }
        else if (total_mark[i] < 40 && total_mark[i] >= 0)
        {
            score_status[i] = "Fail";
        }
        else
        {
            cout << "invalid input, Try again\n";
            continue;
        }
        i++;
    }
    cout << "Here is the score status and the score in a tabular format.\n";
    for (int j = 0; j < num; j++)
    {
        cout << total_mark[j] << "\t" << score_status[j] << endl;
    }

    return 0;
}
