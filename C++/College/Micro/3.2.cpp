#include <iostream>
using namespace std;

class Question
{
private:
    string question;
    string options[4];
    int correctAnswer;

public:
    Question(string q, string opt1, string opt2, string opt3, string opt4, int correct)
    {
        question = q;
        options[0] = opt1;
        options[1] = opt2;
        options[2] = opt3;
        options[3] = opt4;
        correctAnswer = correct;
    }
    int ask()
    {
        cout << question << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << "(" << (i + 1) << ") " << options[i] << endl;
        }
        int userAnswer;
        cout << "\nType Your answer (1/2/3/4): ";
        cin >> userAnswer;

        if (userAnswer == correctAnswer)
        {
            cout << "Correct!\n\n";
            return 1;
        }
        else
        {
            cout << "Wrong! The correct answer was " << correctAnswer << ".\n\n";
            return 0;
        }
    }
};

int main()
{
    Question quiz[4] = {
        Question("What is the capital of India?", "Mumbai", "Agra", "New Delhi", "Indore", 3),
        Question("Which planet is known as the Red Planet?", "Earth", "Mars", "Jupiter", "Saturn", 2),
        Question("Who wrote 'Bhagavad Geeta'?", "Valmiki", "Ved Vyasa", "Tulsidas", "Kalidas", 2),
        Question("What is 2 + 2?", "4", "6", "3", "5", 1)};
    int score = 0;
    int totalquestions = sizeof(quiz) / sizeof(quiz[0]);

    cout << "\tWelcome to the Quiz!\n\n";
    for (int i = 0; i < totalquestions; i++)
    {
        score += quiz[i].ask();
    }
    cout << "Quiz Over! Your final score: " << score << " out of " << totalquestions << endl;

    return 0;
}