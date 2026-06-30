// WRITE A PROGRAM TO LIBRARY MANAGEMENT SYSTEM


#include <iostream>
#include <string>
using namespace std;

const int lim_books = 100;

struct Book {
    int id;
    string title;
    string author;
    float price;
};
Book library[lim_books];
int count = 0;

void add_book();
void add_book() {
    if (count >= lim_books) {
        cout << "Library is full! Cannot add more books.\n";
        return;
    }

    Book b;

    cout << "\nEnter Book ID: ";
    cin >> b.id;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: ID must be a valid number! Operation aborted.\n";
        return;
    }
    cin.ignore(); 
    
    cout << "Enter Book Title: ";
    getline(cin, b.title);
    if (b.title.empty()) {
        cout << "Error: Title cannot be blank!\n";
        return;
    }

    cout << "Enter Author Name: ";
    getline(cin, b.author);

    cout << "Enter Book Price: ";
    cin >> b.price;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Price must be a valid number! \n";
        return;
    }

    library[count] = b;
    count++;

    cout << "Book added successfully!\n";
}
void display_books();
void display_books() {
    if (count == 0) {
        cout << "\nNo book records found in the library.\n";
        return;
    }


    cout << "\nID       Title                          Author                         Price\n";
    cout << "\n";
    
    for (int i = 0; i < count; i++) {
        cout << library[i].id << "      ";
        if (library[i].id < 100) cout << " ";

        cout << library[i].title;
        int titleSpaces = 31 - library[i].title.length();
        for (int s = 0; s < titleSpaces; s++) {
            cout << " ";
        }
        cout << library[i].author;
        int authorSpaces = 31 - library[i].author.length();
        for (int s = 0; s < authorSpaces; s++) {
            cout << " ";
        }

        cout << "$" << library[i].price << "\n";
    }
}
void search_book();
void search_book() {
    if (count == 0) {
        cout << "\nLibrary catalog is currently empty.\n";
        return;
    }

    int search_id;
    cout << "\nEnter Book ID to search: ";
    cin >> search_id;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (library[i].id == search_id) {
            cout << "\nBook Catalog Details:\n";
            cout << "ID     : " << library[i].id << "\n";
            cout << "Title  : " << library[i].title << "\n";
            cout << "Author : " << library[i].author << "\n";
            cout << "Price  : $" << library[i].price << "\n";
            return;
        }
    }
    cout << "Book with ID " << search_id << " not found.\n";
}
void delete_book();
void delete_book() {
    if (count == 0) {
        cout << "\nNo books available to delete.\n";
        return;
    }

    int del_id;
    int foundIndex = -1;

    cout << "\nEnter Book ID to delete: ";
    cin >> del_id;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (library[i].id == del_id) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < count - 1; i++) {
            library[i] = library[i + 1];
        }
        count--; 
        cout << "Book record deleted successfully from systems!\n";
    } else {
        cout << "Book with ID " << del_id << " not found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n........................................... Library Management System ...........................................\n";
        cout << "1. Add a Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Delete Book Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\n[!] Please enter a valid choice..\n";
            continue;
        }

        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                search_book();
                break;
            case 4:
                delete_book();
                break;
            case 5:
                cout << "Exiting program.......\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}