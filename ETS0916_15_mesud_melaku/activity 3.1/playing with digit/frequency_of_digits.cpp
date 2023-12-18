#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Digit\tFrequency\n";

    for(int digitChecker = 0;digitChecker<9;digitChecker++){
        int frequency = 0;
        int temporaryNumber = number;
        while(temporaryNumber!=0){
            int currentDigit = temporaryNumber%10;
            temporaryNumber/=10 ;
            if(currentDigit == digitChecker) {frequency++;}
        }
            if(frequency>0){
            cout << digitChecker << "\t" << frequency << "\n";}

    }

   return 0;
}
