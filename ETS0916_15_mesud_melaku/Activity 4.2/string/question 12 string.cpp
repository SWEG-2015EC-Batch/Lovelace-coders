#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    const string answerSheet = "ABCDABCDAB"; 
    string studentAnswers;

    cout << "Enter your answers for the 10 questions: ";
    cin >> studentAnswers;

    for (char& c : studentAnswers) {
        c = toupper(c);
    }

    int score = 0;
    string markedAnswers;

    for (int i = 0; i < answerSheet.length(); i++) {
        if (studentAnswers[i] == answerSheet[i]) {
            score++;
            markedAnswers += "+";
        } else {
            markedAnswers += "-"; 
        }
    }

    cout << "Test Score: " << score << "/10" << endl;
    cout << "Marked Answers: " << markedAnswers << endl;

    return 0;
}
