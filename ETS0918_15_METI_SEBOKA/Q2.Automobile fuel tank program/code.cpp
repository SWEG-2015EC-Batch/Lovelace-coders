//Automobile fuel tank program
#include <iostream>                                                                                                                                                                                              
using namespace std;
int main(){
float capacity, milesPerGallon;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> capacity;
    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> milesPerGallon;

    float milesWithoutRefueling = capacity * milesPerGallon;
    cout << "The automobile can be driven " << milesWithoutRefueling << " miles without refueling." << endl;
return 0;
}
