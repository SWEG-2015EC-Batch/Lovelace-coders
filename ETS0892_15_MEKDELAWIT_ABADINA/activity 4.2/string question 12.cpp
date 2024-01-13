#include <iostream>
#include <string> // Required for string data type

using namespace std;

int main() {
    // Define the answer key as a string
    string answerKey = "ABCDABCDAB";
    
    // Declare variables to store the student's answers and score
    string studentAnswers;
    int score = 0;
    
    // Prompt the user to enter their answers and read the input
    cout << "Enter your answers (10 characters): ";
    cin >> studentAnswers;
    
    // Check each answer and update the score
    for (int i = 0; i < 10; i++) {
        if (studentAnswers[i] == answerKey[i]) {
            score++;
        }
    }
    
    // Print the test score and marked student answer
    cout << "Your score: " << score << "/10" << endl;
    cout << "Marked answer: " << studentAnswers << endl;
    
    return 0;
}
