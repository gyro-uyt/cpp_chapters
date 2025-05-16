#include <iostream>
using namespace std;

class Options { // creating a class to manage options
  public:
    string option;
};

class Question { // creating a class to manage question
    string problem;
    int noOfOptions; // no of options to display for the question
    Options *arrOpt; // creating an array of options for each question, using pointer
    int correctOpt;

  public:
    double marks; // maximum marks for the question
    Question() {
        count++;
    }
    static int count;
    void setData(string problem, double marks, int noOfOptions) {
        this->problem = problem;
        this->marks = marks;
        this->noOfOptions = noOfOptions;
        arrOpt = new Options[noOfOptions]; // using dynamic allocation, because noOfOptions is not initialized in this case, because it will be initialized when objects are declared
        cin.ignore();
        for(int i = 0; i < noOfOptions; i++) {
            string temp;
            cout << "Enter the option " << i + 1 << " : ";
            getline(cin, temp);
            arrOpt[i].option = temp;
        }
        cout << "Enter the correct option no. : ";
        int correctOption;
        cin >> correctOption;
        while(correctOption < 1 || correctOption > noOfOptions) {
            cout << "Please enter a option no. from " << 1 << " to " << noOfOptions << " : ";
            cin >> noOfOptions;
        }
        correctOpt = correctOption;
    }
    void displayQuestion() {
        cout << problem << endl;
        cout << "Maximum Marks : " << marks << endl;
        cout << "Options : \n";
        for(int i = 0; i < noOfOptions; i++) {
            cout << i + 1 << ". " << arrOpt[i].option << endl;
        }
    }
    double getAnswer() {
        cout << "Enter your answer : ";
        int ans;
        cin >> ans;
        while(ans < 1 || ans >> noOfOptions) {
            cout << "Please enter the correct option : ";
            cin >> ans;
        }
        if(ans == correctOpt)
            return marks;
        else
            return 0;
    }
    ~Question() {
        delete[] arrOpt; // deleting the dynamically allocated memory after the use of object is over, to free the space
    }
};

int Question::count = 0;

Question *getQuestions(Question *arrQues) {
    cout << "Enter the no. of questions in the quiz : ";
    int totalQues;
    cin >> totalQues;
    while(totalQues <= 0) {
        cout << "Please enter a valid no. of questions : ";
        cin >> totalQues;
    }

    arrQues = new Question[totalQues];
    for(int i = 0; i < totalQues; i++) {
        string problem;
        cout << "Enter the Question " << i + 1 << " : \n";
        cin.ignore();
        getline(cin, problem);

        double marks;
        cout << "Enter the maximum marks for this question : ";
        cin >> marks;

        int noOfOptions;
        cout << "Enter the no. of options for this question : ";
        cin >> noOfOptions;
        while(noOfOptions <= 1) {
            cout << "Please enter a valid no. of options : ";
            cin >> noOfOptions;
        }
        arrQues[i].setData(problem, marks, noOfOptions);
    }
    return arrQues;
}

int main() {
    double marks = 0;
    double maxMarks = 0;
    Question *arrQues = getQuestions(arrQues);
    cout << "Enter 1 to start quiz or 0 to terminate the program : ";
    int choice;
    cin >> choice;
    if(choice == 0)
        return 0;
    while(choice != 1 && choice != 0) {
        cout << "Please Enter correct choice : ";
        cin >> choice;
    }

    for(int i = 0; i < Question::count; i++) {
        system("cls");
        cout << "Question no. " << i + 1 << " : ";
        arrQues[i].displayQuestion();
        marks += arrQues[i].getAnswer();
        maxMarks += arrQues[i].marks;
    }
    cout << "You have scored " << marks << " out of " << maxMarks << ".\nThank You";
    delete[] arrQues;
    
    return 0;
}
