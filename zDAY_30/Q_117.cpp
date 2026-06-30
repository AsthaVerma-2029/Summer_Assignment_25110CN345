// WRITE A PROGRAM TO CREATE STUDENT RECORD SYSTEM USING ARRAYS AND STRINGS

#include <iostream>
#include <string>
using namespace std;


const int max_std = 100;
struct Student {
    int id;
    string name;
    string course;
    char grade;
};
Student database[max_std];
int studentCount = 0;

void addStudent() {
    if (studentCount >= max_std) {
        cout << "Database is full! Cannot add more student records.\n";
        return;
    }

    Student s;

    cout << "\nEnter Student ID: ";
    cin >> s.id;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Student ID must be an integer! Operation aborted.\n";
        return;
    }
    
    for (int i = 0; i < studentCount; i++) {
        if (database[i].id == s.id) {
            cout << "Error: Student ID " << s.id << " already exists!\n";
            return;
        }
    }
    cin.ignore(); 
    cout << "Enter Student Name: ";
    getline(cin, s.name);
    if (s.name.empty()) {
        cout << "Error: Student name cannot be left blank!\n";
        return;
    }

    cout << "Enter Course/Major: ";
    getline(cin, s.course);

    cout << "Enter Grade (A, B, C, D, F): ";
    cin >> s.grade;
    s.grade = toupper(s.grade);

    database[studentCount] = s;
    studentCount++;

    cout << "Student record saved successfully!\n";
}
void displayStudents() {
    if (studentCount == 0) {
        cout << "\nNo records found in the student database.\n";
        return;
    }

    cout << "\nID       Student Name                   Course/Major                   Grade\n";
    cout << "----------------------------------------------------------------------------\n";
    
    for (int i = 0; i < studentCount; i++) {
        cout << database[i].id << "      ";
        if (database[i].id < 100) cout << " ";

        cout << database[i].name;
        int nameSpaces = 31 - database[i].name.length();
        for (int k = 0; k < nameSpaces; k++) cout << " ";

        cout << database[i].course;
        int courseSpaces = 31 - database[i].course.length();
        for (int k = 0; k < courseSpaces; k++) cout << " ";

        cout << database[i].grade << "\n";
    }
}
void searchStudent() {
    if (studentCount == 0) {
        cout << "\nDatabase is empty. No records available to search.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Student ID to search: ";
    cin >> searchId;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid ID input.\n";
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        if (database[i].id == searchId) {
            cout << "\n..........Student Record Profile..........\n";
            cout << "ID    : " << database[i].id << "\n";
            cout << "Name  : " << database[i].name << "\n";
            cout << "Course: " << database[i].course << "\n";
            cout << "Grade : " << database[i].grade << "\n";
            cout << ".......................................\n";
            return;
        }
    }
    cout << "Student with ID " << searchId << " not found.\n";
}
void deleteStudent() {
    if (studentCount == 0) {
        cout << "\nNo records found to delete.\n";
        return;
    }

    int deleteId;
    int foundIndex = -1;

    cout << "\nEnter Student ID to delete: ";
    cin >> deleteId;
    if (cin.fail()) {
        cin.clear(); 
        cin.ignore(1000, '\n');
        cout << "Error: Invalid ID entry.\n";
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        if (database[i].id == deleteId) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < studentCount - 1; i++) {
            database[i] = database[i + 1];
        }
        studentCount--; 
        cout << "Student record removed from database successfully!\n";
    } else {
        cout << "Student ID " << deleteId << " not found.\n";
    }
}
int main() {
    int choice;

    while (true) {
        cout << "\n..............................Student Record Management System..............................\n";
        cout << "1. Add New Student Record\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Delete Student Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Error: Letters not allowed. Please enter a valid number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                cout << "Exiting system. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Please select an option between 1 and 5.\n";
        }
    }
    return 0;
}

