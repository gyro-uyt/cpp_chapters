#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct Question {
    string text;
    vector<string> options;
    int correctOption;
};

vector<Question> loadQuestionsFromCSV(const string& filename) {
    vector<Question> questions;
    ifstream file(filename);
    string line;

    // Skip the header
    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string part;
        Question q;
        vector<string> tokens;

        while (getline(ss, part, ',')) {
            // Remove leading/trailing quotes
            if (!part.empty() && part.front() == '"') part.erase(0, 1);
            if (!part.empty() && part.back() == '"') part.pop_back();
            tokens.push_back(part);
        }

        if (tokens.size() == 6) {
            q.text = tokens[0];
            for (int i = 1; i <= 4; ++i)
                q.options.push_back(tokens[i]);
            q.correctOption = stoi(tokens[5]);
            questions.push_back(q);
        }
    }
    return questions;
}

void showInstructions() {
    cout << "\n=== INSTRUCTIONS ===\n";
    cout << "1. This is a multiple choice quiz.\n";
    cout << "2. Each question has four options; only one is correct.\n";
    cout << "3. Enter your choice (1-4) and press Enter.\n";
    cout << "4. At the end, your score will be displayed.\n";
    cout << "=====================\n\n";
}

void runQuiz(const vector<Question>& questions) {
    int score = 0;
    int total = questions.size();

    for (int i = 0; i < total; ++i) {
        const Question& q = questions[i];
        cout << "\nQ" << i + 1 << ": " << q.text << "\n";
        for (int j = 0; j < 4; ++j)
            cout << j + 1 << ". " << q.options[j] << "\n";

        int answer;
        cout << "Your answer (1-4): ";
        cin >> answer;

        if (answer == q.correctOption) {
            cout << "✅ Correct!\n";
            score++;
        } else {
            cout << "❌ Wrong! Correct answer: " << q.options[q.correctOption - 1] << "\n";
        }
    }

    cout << "\n🎉 You scored " << score << " out of " << total << ".\n";
}

int main() {
    string filename = "questions.csv";
    vector<Question> questions = loadQuestionsFromCSV(filename);

    if (questions.empty()) {
        cout << "⚠️ No questions loaded. Make sure 'questions.csv' exists and is properly formatted.\n";
        return 1;
    }

    int choice;
    do {
        cout << "\n===== QUIZ MENU =====\n";
        cout << "1. Start Quiz\n";
        cout << "2. Instructions\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                runQuiz(questions);
                break;
            case 2:
                showInstructions();
                break;
            case 3:
                cout << "Exiting... Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
