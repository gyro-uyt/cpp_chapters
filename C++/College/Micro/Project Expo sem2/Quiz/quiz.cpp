#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

class Question {
  private:
    string question;
    string options[4];
    int correctAnswer;

  public:
    Question() {}

    Question(string q, string opt1, string opt2, string opt3, string opt4, int correct) {
        question = q;
        options[0] = opt1;
        options[1] = opt2;
        options[2] = opt3;
        options[3] = opt4;
        correctAnswer = correct;
    }

    bool isEmpty() const {
        return question.empty();
    }

    int ask() const {
        cout << "\n" << question << endl;
        for(int i = 0; i < 4; ++i)
            cout << "(" << i + 1 << ") " << options[i] << "\n";

        int userAnswer;
        while(true) {
            cout << "Your answer (1-4): ";
            cin >> userAnswer;
            if(cin.fail() || userAnswer < 1 || userAnswer > 4) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Try again.\n";
            } else {
                break;
            }
        }

        if(userAnswer == correctAnswer) {
            cout << "✅ Correct!\n";
            return 1;
        } else {
            cout << "❌ Wrong! Correct answer was option " << correctAnswer << ".\n";
            return 0;
        }
    }
};

struct Player {
    string name;
    int score;
};

class Quiz {
  private:
    static const int maxQuestions = 100;
    Question questions[maxQuestions];
    int questionCount;

  public:
    Quiz() : questionCount(0) {}

    void loadQuestionsFromFile(const string& filename) {
        ifstream file(filename);
        if(!file) {
            cout << "Error: Could not open " << filename << "\n";
            return;
        }

        string q, opt1, opt2, opt3, opt4;
        int correct;
        while(getline(file, q) && questionCount < maxQuestions) {
            getline(file, opt1);
            getline(file, opt2);
            getline(file, opt3);
            getline(file, opt4);
            file >> correct;
            file.ignore(); // Skip newline

            questions[questionCount++] = Question(q, opt1, opt2, opt3, opt4, correct);
        }

        file.close();
    }

    int conduct() const {
        int score = 0;
        for(int i = 0; i < questionCount; ++i) {
            if(!questions[i].isEmpty())
                score += questions[i].ask();
        }
        return score;
    }

    int totalQuestions() const {
        return questionCount;
    }
};

void saveScore(const string& username, int score) {
    ofstream file("scores.txt", ios::app);
    if(file) {
        file << username << " " << score << "\n";
        file.close();
    } else {
        cout << "Error saving score.\n";
    }
}

void showLeaderboard() {
    ifstream file("scores.txt");
    Player players[100];
    int count = 0;

    if(!file) {
        cout << "No leaderboard data found.\n";
        return;
    }

    while(file >> players[count].name >> players[count].score && count < 100) {
        count++;
    }
    file.close();

    // Sort descending by score
    sort(players, players + count, [](const Player & a, const Player & b) {
        return a.score > b.score;
    });

    cout << "\n------ Leaderboard ------\n";
    for(int i = 0; i < count; ++i)
        cout << setw(2) << i + 1 << ". " << players[i].name << " - " << players[i].score << "\n";
    cout << "-------------------------\n";
}

void menu() {
    cout << "\n====== Quiz Application Menu ======\n";
    cout << "1. Start Quiz\n";
    cout << "2. View Leaderboard\n";
    cout << "3. Exit\n";
    cout << "Enter your choice (1-3): ";
}

int main() {
    int choice;
    bool running = true;

    while(running) {
        menu();
        cin >> choice;
        cin.ignore();

        switch(choice) {
        case 1: {
            Quiz quiz;
            quiz.loadQuestionsFromFile("questions.txt");

            if(quiz.totalQuestions() == 0) {
                cout << "No questions available. Please check the questions file.\n";
                break;
            }

            string name;
            cout << "Enter your name: ";
            getline(cin, name);

            int score = quiz.conduct();
            cout << "\nQuiz Over! " << name << ", your score: " << score << "/" << quiz.totalQuestions() << "\n";

            saveScore(name, score);
            break;
        }
        case 2:
            showLeaderboard();
            break;
        case 3:
            cout << "Thank you for playing. Goodbye!\n";
            running = false;
            break;
        default:
            cout << "Invalid choice. Please enter 1-3.\n";
        }
    }

    return 0;
}