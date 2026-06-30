//WRITE A PROGRAM TO CREATE CONTACT MANAGEMENT SYSTEM


#include <iostream>
#include <string>

using namespace std;

const int MAX_CONTACTS = 100;

struct Contact {
    int id;
    string name;
    string phoneNumber;
    string email;
};

Contact addressBook[MAX_CONTACTS];
int contactCount = 0;

void addContact();
void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        cout << "Address book full! Cannot add more contacts.\n";
        return;
    }

    Contact c;

    cout << "\nEnter Contact ID: ";
    cin >> c.id;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Contact ID must be a valid integer! Operation aborted.\n";
        return;
    }

    for (int i = 0; i < contactCount; i++) {
        if (addressBook[i].id == c.id) {
            cout << "Error: Contact ID " << c.id << " already exists!\n";
            return;
        }
    }

    cin.ignore(); 
    cout << "Enter Contact Name: ";
    getline(cin, c.name);
    if (c.name.empty()) {
        cout << "Error: Name field cannot be left empty!\n";
        return;
    }

    cout << "Enter Phone Number: ";
    getline(cin, c.phoneNumber);

    cout << "Enter Email Address: ";
    getline(cin, c.email);

    addressBook[contactCount] = c;
    contactCount++;

    cout << "Contact saved successfully!\n";
}
void displayContacts();
void displayContacts() {
    if (contactCount == 0) {
        cout << "\nNo contacts found in your address book.\n";
        return;
    }

    cout << "\nID       Name                           Phone Number         Email\n";
    cout << "-----------------------------------------------------------------------------------\n";
    
    for (int i = 0; i < contactCount; i++) {
        cout << addressBook[i].id << "      ";
        if (addressBook[i].id < 100) cout << " ";

        cout << addressBook[i].name;
        int nameSpaces = 31 - addressBook[i].name.length();
        for (int s = 0; s < nameSpaces; s++) {
            cout << " ";
        }

        cout << addressBook[i].phoneNumber;
        int phoneSpaces = 21 - addressBook[i].phoneNumber.length();
        for (int s = 0; s < phoneSpaces; s++) {
            cout << " ";
        }

        cout << addressBook[i].email << "\n";
    }
}

void searchContact();
void searchContact() {
    if (contactCount == 0) {
        cout << "\nNo contacts available to search.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Contact ID to search: ";
    cin >> searchId;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid input entry.\n";
        return;
    }

    for (int i = 0; i < contactCount; i++) {
        if (addressBook[i].id == searchId) {
            cout << "\n...............Contact Information...............\n";
            cout << "ID           : " << addressBook[i].id << "\n";
            cout << "Name         : " << addressBook[i].name << "\n";
            cout << "Phone Number : " << addressBook[i].phoneNumber << "\n";
            cout << "Email Address: " << addressBook[i].email << "\n";
            cout << "---------------------------\n";
            return;
        }
    }
    cout << "Contact with ID " << searchId << " not found.\n";
}
void deleteContact();
void deleteContact() {
    if (contactCount == 0) {
        cout << "\nNo contacts found to delete.\n";
        return;
    }

    int deleteId;
    int foundIndex = -1;

    cout << "\nEnter Contact ID to delete: ";
    cin >> deleteId;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < contactCount; i++) {
        if (addressBook[i].id == deleteId) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < contactCount - 1; i++) {
            addressBook[i] = addressBook[i + 1];
        }
        contactCount--; 
        cout << "Contact removed from address book successfully!\n";
    } else {
        cout << "Contact ID " << deleteId << " not found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n........................................Contact Management System........................................\n";
        cout << "1. Add New Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by ID\n";
        cout << "4. Delete Contact Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Error: Letters not allowed. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout << "Exiting system........\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}