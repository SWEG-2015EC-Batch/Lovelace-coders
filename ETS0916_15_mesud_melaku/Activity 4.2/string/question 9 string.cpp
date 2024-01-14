#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char favorite1[] = "The Walking Dead"; 
    
    char favorite2[20]; 
    
    strcpy(favorite2, "Breaking Bad");
    
    cout << "Favorite TV Programs:" << endl;
    cout << "1. " << favorite1 << endl;
    cout << "2. " << favorite2 << endl;
    
    return 0;
}
