// WRITE A PROGRAM TO CREATE STUDENT RECORD MANGEMENT

#include <iostream>
using namespace std;

const int limit_std = 100;

struct Student {
    int roll_no;
    string name;
    float cgpa;
};

Student students[limit_std];
int count = 0;

void add_std();
void add_std() {
    if (count >= limit_std) {
        cout << "System full! Cannot add more students.\n";
        return;
    }

    Student s;

    cout << "\nEnter Roll Number: ";
    cin >> s.roll_no;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid roll no entry.\n";
        return;
    }

    cin.ignore(); 
    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter cgpa: ";
    cin >> s.cgpa;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: GPA must be a numeric value!\n";
        return;
    }

    students[count] = s;
    count++;

    cout << "Student added successfully!\n";
}
void display_std();
void display_std() {
    if (count == 0) {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\nRoll No\t\tName\t\t\tcgpa\n";
    cout << "\n";
    for (int i = 0; i < count; i++) {
        cout << students[i].roll_no << "\t\t" 
             << students[i].name << "\t\t\t" 
             << students[i].cgpa << "\n";
    }
}
void search_std();
void search_std() {
    if (count == 0) {
        cout << "\nNo student records found.\n";
        return;
    }

    int search_roll;
    cout << "\nEnter Roll Number to search: ";
    cin >> search_roll;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid roll no entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == search_roll) {
            cout << "\nStudent Found:\n";
            cout << "Roll Number: " << students[i].roll_no << "\n";
            cout << "Name       : " << students[i].name << "\n";
            cout << "cgpa        : " << students[i].cgpa << "\n";
            return;
        }
    }
    cout << "Student with Roll Number " << search_roll << " not found.\n";
}
void del_std();
void del_std() {
    if (count == 0) {
        cout << "\nNo student records found to delete.\n";
        return;
    }

    int del_roll;
    int found = -1;

    cout << "\nEnter Roll Number to delete: ";
    cin >> del_roll;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Invalid roll no entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == del_roll) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        for (int i = found; i < count - 1; i++) {
            students[i] = students[i + 1];
        }
        count--; 
        cout << "Student record deleted successfully!\n";
    } else {
        cout << "Student with Roll Number " << del_roll << " not found.\n";
    }
}

int main(){
    int choice;
    while(choice!=5){
        cout<<"\n.......................WELCOME TO STUDENT RECORD MANAGEMENT SYSTEM.............................................\n";
        cout<<"1. Add student record \n";
        cout<<"2. Display all records \n";
        cout<<"3. Search student record \n";
        cout<<"4. Delete student record \n";
        cout<<"5. Exit \n\n";
        cout<<"Enter your choice : ";
        cin>>choice;
         if (cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a valid number.\n";
            continue;
        }
        switch (choice) {
            case 1:
                add_std();
                break;
            case 2:
                display_std();
                break;
            case 3:
                search_std();
                break;
            case 4:
                del_std();
                break;
            case 5:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    
return 0;
}