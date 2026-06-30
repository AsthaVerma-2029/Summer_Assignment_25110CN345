// WRITE A PROGRAM TO CREATE MINI LIBRARY SYSTEM


#include <iostream>
#include <string>

using namespace std;

const int max_lim = 100;

int bookIds[max_lim];
string bookTitles[max_lim];
bool isAvailable[max_lim]; 
int totalBooks = 0;
void addBook() {
    if (totalBooks >= max_lim) {
        cout << "Library is full! Cannot add more books.\n";
        return;
    }

    int id;
    cout << "\nEnter Book ID: ";
    cin >> id;

    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid Book ID. Operation aborted.\n";
        return;
    }

    for (int i = 0; i < totalBooks; i++) {
        if (bookIds[i] == id) {
            cout << "Error: Book ID " << id << " already exists!\n";
            return;
        }
    }

    cin.ignore(); 
    cout << "Enter Book Title: ";
    getline(cin, bookTitles[totalBooks]);

    if (bookTitles[totalBooks].empty()) {
        cout << "Error: Title cannot be blank!\n";
        return;
    }

    bookIds[totalBooks] = id;
    isAvailable[totalBooks] = true; 
    totalBooks++;

    cout << "Book added successfully!\n";
}
void displayBooks() {
    if (totalBooks == 0) {
        cout << "\nThe library catalog is currently empty.\n";
        return;
    }

    cout << "\nID\tStatus\t\tTitle\n";
    cout << "--------------------------------------\n";
    for (int i = 0; i < totalBooks; i++) {
        cout << bookIds[i] << "\t";
        if (isAvailable[i]) {
            cout << "[Available]\t";
        } else {
            cout << "[Borrowed]\t";
        }
        cout << bookTitles[i] << "\n";
    }
}
void borrowBook() {
    if (totalBooks == 0) {
        cout << "\nNo books available to borrow.\n";
        return;
    }

    int id;
    cout << "\nEnter Book ID to borrow: ";
    cin >> id;

    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < totalBooks; i++) {
        if (bookIds[i] == id) {
            if (isAvailable[i]) {
                isAvailable[i] = false;
                cout << "Success! You have borrowed \"" << bookTitles[i] << "\".\n";
            } else {
                cout << "Sorry, \"" << bookTitles[i] << "\" is already checked out.\n";
            }
            return;
        }
    }
    cout << "Book ID " << id << " not found in catalog.\n";
}
void returnBook() {
    if (totalBooks == 0) {
        cout << "\nNo books are currently issued.\n";
        return;
    }

    int id;
    cout << "\nEnter Book ID to return: ";
    cin >> id;

    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < totalBooks; i++) {
        if (bookIds[i] == id) {
            if (!isAvailable[i]) {
                isAvailable[i] = true;
                cout << "Success! You have returned \"" << bookTitles[i] << "\".\n";
            } else {
                cout << "This book is already sitting in the library shelf.\n";
            }
            return;
        }
    }
    cout << "Book ID " << id << " does not match our library records.\n";
}

int main() {
    int choice;

    while (true) {
        cout << "\n.....................................Mini Library Menu.............................................\n";
        cout << "1. Add New Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Borrow a Book\n";
        cout << "4. Return a Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Error: Please enter a valid menu number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                borrowBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                cout << "Exiting system.....!\n";
                return 0;
            default:
                cout << "Invalid choice! Please select an option between 1 and 5.\n";
        }
    }
    return 0;
}