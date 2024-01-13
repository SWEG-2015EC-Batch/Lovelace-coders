#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Input the string
    
    unordered_map<char, int> freqMap; // Create an unordered map to store character frequencies
    
    for (char c : input) {
        if (isalpha(c)) { // Check if c is an alphabet
            freqMap[tolower(c)]++; // Increment frequency of lowercase c in the map
        } else { // Otherwise, c is a special character
            freqMap[c]++; // Increment frequency of c in the map
        }
    }
    
    char maxChar = '\0', minChar = '\0'; // Initialize maxChar and minChar to null characters
    int maxFreq = 0, minFreq = input.length(); // Initialize maxFreq to 0 and minFreq to length of input string
    
    for (auto it : freqMap) { // Iterate through the map
        if (it.second > maxFreq) { // If current frequency is greater than maxFreq
            maxChar = it.first; // Update maxChar to current character
            maxFreq = it.second; // Update maxFreq to current frequency
        }
        if (it.second < minFreq) { // If current frequency is less than minFreq
            minChar = it.first; // Update minChar to current character
            minFreq = it.second; // Update minFreq to current frequency
        }
    }
    
    // Print the frequency of each character and the character with largest and smallest frequency
    for (auto it : freqMap) {
        cout << "'" << it.first << "' appears " << it.second << " times." << endl;
    }
    cout << "The character with the largest frequency is '" << maxChar << "' with " << maxFreq << " occurrences." << endl;
    cout << "The character with the smallest frequency is '" << minChar << "' with " << minFreq << " occurrences." << endl;
    
    return 0;
}
