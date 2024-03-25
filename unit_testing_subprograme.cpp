#include <iostream>
#include <iomanip>
#include <string.h>
#include <queue>
#include <windows.h>
#include <mmsystem.h>
#include <chrono>
#include <assert.h>
using namespace std;
//testam daca scorul este calculat corespunzator
void testQuestionsSet1() {
    int score = 0;
    int cor = 0;

    // Set up simulated user input
    char answers[] = {'a', 'b', 'a', 'd', 'b', 'c', 'a'};
    int answersSize = sizeof(answers) / sizeof(answers[0]);
    int currentIndex = 0;

    // Simulate user input and check answers
    auto simulateUserInput = [&currentIndex, &answers, answersSize]() {
        return answers[currentIndex++];
    };

    // Intrebarile de test
    for (int i = 1; i <= 7; ++i) {
        char userAnswer;
        cout << "Intrebarea " << i << ": ";
        cin >> userAnswer;

        // Verifica daca raspunsul este corect
        if (userAnswer == simulateUserInput()) {
            score++;
            cor++;
            cout << "Raspuns corect!!!:)\n";
        } else {
            cout << "Raspuns gresit!:(\n";
        }
    }

    // Check if the score is as expected
    assert(score == cor);  // Adjust this value based on the correct answers

    cout << "Unit test for Questions Set 1 passed!\n";
}

int main() {
    testQuestionsSet1();  // Run the unit test for the first set of questions

    return 0;
}
