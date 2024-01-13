##include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "Hello, World! 123";
    
    // Remove non-alphabetic characters
    str.erase(remove_if(str.begin(), str.end(), [](char c) { return !isalpha(c); }), str.end());
    
    cout << str << endl; // Output: HelloWorld
    
    return 0;
}
