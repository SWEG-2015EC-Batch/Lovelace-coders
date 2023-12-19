#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    double sum = 0.0;
    double sumSquared = 0.0;
    int count1 = 0;

    cout << "Enter the number of elements: ";
    cin >> count1;

    cout << "Enter " << count1 << " numbers:\n";

    for (int i = 0; i < count1; i++) {
        cin >> num;
        sum += num;
        sumSquared += num * num;
    }

    cout << "Input numbers: ";
    for (int i = 0; i < count1; i++) {
        cout << num << ",";
    }
    cout << endl;

    cout << "Mean: " << sum / count1 << endl;
    cout << "Standard Deviation: " << sqrt((sumSquared - (sum * sum) / count1) / count1) << endl;

    return 0;
}
