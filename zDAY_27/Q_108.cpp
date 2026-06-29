// WRITE A PROGRAM TO CREATE MARKSHEET GENERATION SYSYTEM


#include <iostream>
#include <string>

using namespace std;

const int max_lim = 100;

struct Marksheet {
    int roll_no;
    string name;
    int mathMarks;
    int physicsMarks;
    int chemistryMarks;
    int csMarks;
    int englishMarks;
    int totalMarks;
    float percentage;
};


Marksheet marksheets[max_lim];
int std_count = 0;

// Function prototypes
void add_marksheet();
void add_marksheet() {
    if (std_count >= max_lim) {
        cout << "System full! Cannot add more marksheets.\n";
        return;
    }

    Marksheet m;

    cout << "\nEnter Roll Number: ";
    cin >> m.roll_no;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid roll no entry.\n";
        return;
    }
    
    cin.ignore(); 
    cout << "Enter Name: ";
    getline(cin, m.name);

    cout << "Enter Math Marks (out of 100): ";
    cin >> m.mathMarks;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid marks entry.\n";
        return;
    }

    cout << "Enter Physics Marks (out of 100): ";
    cin >> m.physicsMarks;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid marks entry.\n";
        return;
    }
    
    cout << "Enter Chemistry Marks (out of 100): ";
    cin >> m.chemistryMarks;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid marks entry.\n";
        return;
    }

    cout << "Enter CS Marks (out of 100): ";
    cin >> m.csMarks;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid marks entry.\n";
        return;
    }

    cout << "Enter English Marks (out of 100): ";
    cin >> m.englishMarks;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid marks entry.\n";
        return;
    }

    
    m.totalMarks = m.mathMarks + m.csMarks + m.englishMarks+ m.physicsMarks+m.chemistryMarks;
    m.percentage = (m.totalMarks / 500.0) * 100.0;

    marksheets[std_count] = m;
    std_count++;

    cout << "Marksheet added successfully!\n";
}

void diplay_marksheet();
void diplay_marksheet() {
    if (std_count == 0) {
        cout << "\nNo records found.\n";
        return;
    }

    cout << "\nRoll No   Name                           Math  Phy  Chem   CS   Eng    Total   Percentage\n";
    
    for (int i = 0; i < std_count; i++) {
        
        cout << marksheets[i].roll_no << "       ";
        if (marksheets[i].roll_no < 100) cout << " ";

        cout << marksheets[i].name;
        int spacesNeeded = 31 - marksheets[i].name.length();
        for (int s = 0; s < spacesNeeded; s++) {
            cout << " ";
        }

        cout << marksheets[i].mathMarks << "    "
             << marksheets[i].physicsMarks << "    "
             << marksheets[i].chemistryMarks << "    "
             << marksheets[i].csMarks << "    "
             << marksheets[i].englishMarks << "    "
             << marksheets[i].totalMarks << "    "
             << marksheets[i].percentage << "%\n";
    }
}
void search_marksheet();
void search_marksheet() {
    if (std_count == 0) {
        cout << "\nNo records found.\n";
        return;
    }

    int search_roll;
    cout << "\nEnter Roll Number of the student to search marksheet: ";
    cin >> search_roll;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid roll no entry.\n";
        return;
    }

    for (int i = 0; i < std_count; i++) {
        if (marksheets[i].roll_no == search_roll) {
            cout << "\n\n";
            cout << "       STUDENT MARKSHEET       \n";
            cout << "\n";
            cout << "Roll Number: " << marksheets[i].roll_no << "\n";
            cout << "Name       : " << marksheets[i].name << "\n";
            cout << "\n";
            cout << "Mathematics: " << marksheets[i].mathMarks << " / 100\n";
            cout << "Physics    : " << marksheets[i].physicsMarks << " / 100\n";
            cout << "Chemistry    : " << marksheets[i].chemistryMarks << " / 100\n";
            cout << "cs    : " << marksheets[i].csMarks << " / 100\n";
            cout << "English    : " << marksheets[i].englishMarks << " / 100\n";
            cout << "\n";
            cout << "Total Marks: " << marksheets[i].totalMarks << " / 500\n";
            cout << "Percentage : " << marksheets[i].percentage << "%\n";
            cout << "\n";
            return;
        }
    }
    cout << "Record with Roll Number " << search_roll << " not found.\n";
}
void del_marksheet();
void del_marksheet() {
    if (std_count == 0) {
        cout << "\nNo records found to delete.\n";
        return;
    }

    int del_roll;
    int found = -1;

    cout << "\nEnter Roll Number of the student to delete marksheet: ";
    cin >> del_roll;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid roll no  entry.\n";
        return;
    }

    for (int i = 0; i < std_count; i++) {
        if (marksheets[i].roll_no == del_roll) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        for (int i = found; i < std_count - 1; i++) {
            marksheets[i] = marksheets[i + 1];
        }
        std_count--; 
        cout << "\nMarksheet record deleted successfully!\n";
    } else {
        cout << "Record with Roll Number " << del_roll << " not found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n.............................................MARKSHEET GENERATION SYSTEM...............................................\n";
        cout << "1. Add Student Marks\n";
        cout << "2. Display All Marksheets\n";
        cout << "3. Search Marksheet by Roll No.\n";
        cout << "4. Delete Marksheet Record\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
         if (cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a valid number.\n";
            continue;
        }
        switch (choice) {
            case 1:
                add_marksheet();
                break;
            case 2:
                diplay_marksheet();
                break;
            case 3:
                search_marksheet();
                break;
            case 4:
                del_marksheet();
                break;
            case 5:
                cout << "\nExiting program.....\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
