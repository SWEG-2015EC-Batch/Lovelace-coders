#include <iostream>

using namespace std;

int main()
{
    double  capacity_in_gallon,miles_per_gallon;
    cout << " enter the capacity in gallons of fuel tank";
    cin >> capacity_in_gallon;
    cout<< " enter miles per gallon";
    cin >> miles_per_gallon;
    cout<< "the number of miles the automobile can be driven without refueling is"<< capacity_in_gallon*miles_per_gallon;

    return 0;
}
