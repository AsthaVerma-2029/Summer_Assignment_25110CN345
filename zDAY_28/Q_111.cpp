




#include <iostream>
#include <string>

using namespace std;

const int limi_tkts = 100;

struct Ticket {
    int ticketId;
    string customerName;
    string seatNumber; 
    float price;
};

Ticket bookings[limi_tkts];
int count = 0;


void bookTicket();
void bookTicket() {
    if (count >= limi_tkts) {
        cout << "Booking full! No more tickets available.\n";
        return;
    }

    Ticket t;

    cout << "\nEnter Ticket ID: ";
    cin >> t.ticketId;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Ticket ID must be a valid integer! Operation aborted.\n";
        return;
    }
    
    for (int i = 0; i < count; i++) {
        if (bookings[i].ticketId == t.ticketId) {
            cout << "Error: Ticket ID " << t.ticketId << " is already booked!\n";
            return;
        }
    }

    cin.ignore(); 
    cout << "Enter Customer Name: ";
    getline(cin, t.customerName);
    if (t.customerName.empty()) {
        cout << "Error: Name field cannot be left empty!\n";
        return;
    }

    cout << "Enter Seat Number (e.g., A12): ";
    getline(cin, t.seatNumber);

    cout << "Enter Ticket Price: ";
    cin >> t.price;
    if (cin.fail() || t.price < 0) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid ticket price! Operation aborted.\n";
        return;
    }

    bookings[count] = t;
    count++;

    cout << "Ticket booked successfully!\n";
}
void displayBookings();
void displayBookings() {
    if (count == 0) {
        cout << "\nNo active ticket bookings found.\n";
        return;
    }

    cout << "\nID       Customer Name                  Seat      Price\n";
    cout << "-----------------------------------------------------------\n";
    
    for (int i = 0; i < count; i++) {
        cout << bookings[i].ticketId << "      ";
        if (bookings[i].ticketId < 100) cout << " ";

        cout << bookings[i].customerName;
        int spacesNeeded = 31 - bookings[i].customerName.length();
        for (int s = 0; s < spacesNeeded; s++) {
            cout << " ";
        }

        cout << bookings[i].seatNumber;
        int seatSpaces = 10 - bookings[i].seatNumber.length();
        for (int s = 0; s < seatSpaces; s++) {
            cout << " ";
        }

        cout << "" << bookings[i].price << "\n";
    }
}
void searchTicket();
void searchTicket() {
    if (count == 0) {
        cout << "\nNo active bookings available to search.\n";
        return;
    }

    int searchId;
    cout << "\nEnter Ticket ID to search: ";
    cin >> searchId;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid input entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (bookings[i].ticketId == searchId) {
            cout << "\n--- Ticket Reservation Details ---\n";
            cout << "Ticket ID    : " << bookings[i].ticketId << "\n";
            cout << "Customer Name: " << bookings[i].customerName << "\n";
            cout << "Seat Number  : " << bookings[i].seatNumber << "\n";
            cout << "Price Paid   : " << bookings[i].price << "\n";
            cout << "----------------------------------\n";
            return;
        }
    }
    cout << "Ticket with ID " << searchId << " not found.\n";
}
void cancelBooking();
void cancelBooking() {
    if (count == 0) {
        cout << "\nNo active bookings found to cancel.\n";
        return;
    }

    int deleteId;
    int foundIndex = -1;

    cout << "\nEnter Ticket ID to cancel: ";
    cin >> deleteId;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Error: Invalid entry.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        if (bookings[i].ticketId == deleteId) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < count - 1; i++) {
            bookings[i] = bookings[i + 1];
        }
        count--; 
        cout << "Booking cancelled and record removed successfully!\n";
    } else {
        cout << "Ticket ID " << deleteId << " not found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n.............................................Ticket Booking System.............................................\n";
        cout << "1. Book New Ticket\n";
        cout << "2. Display All Bookings\n";
        cout << "3. Search Ticket by ID\n";
        cout << "4. Cancel Booking (Delete Record)\n";
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
                bookTicket();
                break;
            case 2:
                displayBookings();
                break;
            case 3:
                searchTicket();
                break;
            case 4:
                cancelBooking();
                break;
            case 5:
                cout << "Exiting system......\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
