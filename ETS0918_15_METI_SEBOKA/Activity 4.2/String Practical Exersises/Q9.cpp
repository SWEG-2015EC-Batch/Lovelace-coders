#include <iostream>
#include <cstring>  

using namespace std;

int main() {
    char favPrograms[2][50] = {" Prison break"}; 

    strcpy(favPrograms[1], " Money hiest");

    cout << "My favorite programs are:\n";
    cout << "1. " << favPrograms[0] << '\n';
    cout << "2. " << favPrograms[1] << '\n';

    return 0;
}
