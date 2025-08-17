//1 Build a quiz application that manages questions, answers and user scores using OOPs.

#include <iostream>
using namespace std;

class Quiz
{
    int n, score = 0;

public:
    void loadques()
    {
        int ans1, ans2, ans3, ans4, ans5;
        cout << "1. What is the capital of India?\n1) Mumbai\t 2) Kolkata\t 3) New Delhi\t 4) Chennai \nYou're ans: ";
        cin >> ans1;
        switch (ans1)
        {
        case (3):
            cout << endl;
            score++;
            break;

        default:
            cout << endl;
            break;
        }

        cout << "2. Who was the first Prime Minister of India?\n1) Mahatma Gandhi\t 2) Jawaharlal Nehru\t 3) Sardar Patel\t 4)  Dr. B.R. Ambedkar \nYou're ans: ";
        cin >> ans2;
        switch (ans2)
        {
        case (2):
            cout << endl;
            score++;
            break;

        default:
            cout << endl;
            break;
        }

        cout << "3. How many continents are there in the world?\n1) 5\t 2) 6\t 3) 7\t 4) 8 \nYou're ans: ";
        cin >> ans3;
        switch (ans3)
        {
        case (3):
            cout << endl;
            score++;
            break;

        default:
            cout << endl;
            break;
        }

        cout << "4. Which planet is known as the Red Planet? \n1) Venus\t 2) Jupiter\t 3) Mars\t 4) Saturn \nYou're ans: ";
        cin >> ans4;
        switch (ans4)
        {
        case (3):
            cout << endl;
            score++;
            break;

        default:
            cout << endl;
            break;
        }

        cout << "5. What is the national animal of India? \n1) Lion\t 2) Tiger\t 3) Elephant\t 4) Peacock\nYou're ans: ";
        cin >> ans5;
        switch (ans5)
        {
        case (2):
            cout << endl;
            score++;
            break;

        default:
            cout << endl;
            break;
        }
    }

    void fscore()
    {
        cout << "You're score is " << score << "/5" << endl;
    }
};

int main()
{
    Quiz first;
    first.loadques();
    first.fscore();
    return 0;
}

// cout << "Q.  ?\n1)\t 2)\t 3)\t 4) \nYou're ans: ";
//         cin >> ans;
//         switch (ans)
//         {
//         case ():
//             cout << "" << endl<<endl;
//             score++;
//             break;

//         default:
//             cout << "" << endl<<endl;
//             break;
//         }