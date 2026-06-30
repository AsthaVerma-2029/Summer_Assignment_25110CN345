//// WRITE A PROGRAM TO CRATE MENU DRIVEN STRING OPERATIONS SYSTEM


#include <iostream>
#include <string>
using namespace std;

void input_str(string &str) {
    cin.ignore(); 
    cout << "Enter your text string: ";
    getline(cin, str);
    
    cout << "String updated successfully!\n";
}
void rev_str(string str) {
    cout << "Reversed String: ";
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << "\n";
}
void chk_pal(string str) {
    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;
    while (start < end) {
        char char1 = tolower(str[start]);
        char char2 = tolower(str[end]);
        if (char1 != char2) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome) {
        cout << "Result: \"" << str << "\" IS a palindrome.\n";
    } else {
        cout << "Result: \"" << str << "\" is NOT a palindrome.\n";
    }
}
void count(string str);
void count(string str) {
    int vowels = 0;
    int consonants = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    cout << "Vowels Count    : " << vowels << "\n";
    cout << "Consonants Count: " << consonants << "\n";
}
int main() {
    string str = ""; 
    int choice;

    while (true) {
        cout << "\n..................................String Operations Menu..................................\n";
        cout << "------------------------------\n";
        cout << "1. Input New String\n";
        cout << "2. Reverse the String\n";
        cout << "3. Check if Palindrome\n";
        cout << "4. Count Vowels & Consonants\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Error: Please enter a valid menu number.\n";
            continue;
        }
        if ((choice >= 2 && choice <= 4) && str.empty()) {
            cout << "\n[!] Error: String is empty! Please input a string using option 1 first.\n";
            continue;
        }

        switch (choice) {
            case 1:
                input_str(str);
                break;
            case 2:
                rev_str(str);
                break;
            case 3:
                chk_pal(str);
                break;
            case 4:
                count(str);
                break;
            case 5:
                cout << "Exiting program.........!\n";
                return 0;
            default:
                cout << "Invalid choice! Please select an option between 1 and 5.\n";
        }
    }
    return 0;
}
