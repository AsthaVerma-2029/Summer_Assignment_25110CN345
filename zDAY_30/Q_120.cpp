// WRITE A PROGRAM TO DEVELOP COMPLETE MINI PROJECT USING ARRAYS,STRINGS, AND FUNCTIONS


#include <iostream>
#include <string>
using namespace std;

const int total_ques = 5;

string questions[total_ques] = {
    "What does CPU stand for?",
    "Which programming language is known as the 'mother of all languages'?",
    "What is the smallest unit of data in a computer?",
    "Which loop is guaranteed to execute at least once?",
    "What is the default return type of the main() function in C++?"
};

string options[total_ques] = {
    "A. Central Processing Unit\nB. Computer Personal Unit\nC. Central Processor Unifier\nD. Core Process Utility",
    "A. Python\nB. Java\nC. C\nD. Assembly",
    "A. Bit\nB. Byte\nC. Nibble\nD. Kilobyte",
    "A. For loop\nB. While loop\nC. Do-While loop\nD. None of the above",
    "A. void\nB. int\nC. float\nD. char"
};

char correctAnswers[total_ques] = {'A', 'C', 'A', 'C', 'B'};

bool ques_att[total_ques] = {false, false, false, false, false};
bool history[total_ques] = {false, false, false, false, false};

void quiz_srt() {
    cout << "\n--- STARTING THE QUIZ ---" << endl;
    cout << "(Type your answer as A, B, C, or D)" << endl;

    for (int i = 0; i < total_ques; i++) {
        char userAnswer;
        cout << "\nQuestion " << (i + 1) << ": " << questions[i] << endl;
        cout << options[i] << endl;
        cout << "Your Answer: ";
        cin >> userAnswer;

        userAnswer = toupper(userAnswer);

        while (userAnswer != 'A' && userAnswer != 'B' && userAnswer != 'C' && userAnswer != 'D') {
            cout << "[!] Invalid choice. Enter A, B, C, or D: ";
            cin >> userAnswer;
            userAnswer = toupper(userAnswer);
        }

        ques_att[i] = true;
        if (userAnswer == correctAnswers[i]) {
            cout << "[+] Correct!" << endl;
            history[i] = true;
        } else {
            cout << "[-] Wrong! The correct answer was " << correctAnswers[i] << "." << endl;
            history[i] = false;
        }
    }
    cout << "\nQuiz complete! Head to the Scoreboard to see your results." << endl;
}

void score_board() {
    int correctCount = 0;
    int attemptedCount = 0;

    for (int i = 0; i < total_ques; i++) {
        if (ques_att[i]) {
            attemptedCount++;
            if (history[i]) {
                correctCount++;
            }
        }
    }

    if (attemptedCount == 0) {
        cout << "\n[!] You haven't taken the quiz yet! Select option 1 first.\n";
        return;
    }

    float percentage = ((float)correctCount / total_ques) * 100;

    cout << "\n--------------------------------" << endl;
    cout << "           SCOREBOARD           " << endl;
    cout << "--------------------------------" << endl;
    cout << "Total Questions : " << total_ques << endl;
    cout << "Correct Answers : " << correctCount << endl;
    cout << "Final Score     : " << percentage << "%" << endl;
    cout << "Performance     : ";
    
    if (percentage == 100) cout << "Perfect Score! Master Mind!" << endl;
    else if (percentage >= 75) cout << "Excellent Job!" << endl;
    else if (percentage >= 50) cout << "Good Try, room to grow." << endl;
    else cout << "Keep practicing!" << endl;
    cout << "--------------------------------" << endl;
}

void wrong_ans() {
    int missedCount = 0;
    bool quizTaken = false;

    for (int i = 0; i < total_ques; i++) {
        if (ques_att[i]) quizTaken = true;
    }

    if (!quizTaken) {
        cout << "\n[!] No review logs found. Take the quiz first!\n";
        return;
    }

    cout << "\n--- INCORRECT QUESTIONS REVIEW ---" << endl;
    for (int i = 0; i < total_ques; i++) {
        if (ques_att[i] && !history[i]) {
            missedCount++;
            cout << "\nQuestion " << (i + 1) << ": " << questions[i] << endl;
            cout << "Correct Answer was: " << correctAnswers[i] << endl;
        }
    }

    if (missedCount == 0) {
        cout << "Amazing! You didn't get any questions wrong. Nothing to review!" << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n--------------------------------" << endl;
        cout << "           QUIZ SYSTEM        " << endl;
        cout << "----------------------------------" << endl;
        cout << "1. Start/Take the Quiz" << endl;
        cout << "2. View Scoreboard & Performance" << endl;
        cout << "3. Review Missed Questions" << endl;
        cout << "4. Exit Game" << endl;
        cout << "Enter your choice: ";
        cin>>choice;

     
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Invalid entry. Please enter a valid menu number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                quiz_srt();
                break;
            case 2:
                score_board();
                break;
            case 3:
                wrong_ans();
                break;
            case 4:
                cout << "\nThank you for playing! Goodbye.\n";
                return 0;
            default:
                cout << "Invalid choice! Please select 1 to 4.\n";
        }
    }
    return 0;
}
