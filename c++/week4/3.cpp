#include <iostream>
#include <cctype> // Required for character handling library

using namespace std;

// Function prototypes as seen in the slide
int menu();
void action1();
void action2();

int main() {
    int command = menu(); // The function menu() reads a command

    // Switch evaluation based on the slide's example
    switch(command) {
        case 'a':
        case 'A':
            action1(); // Carry out 1st action
            break;
        case 'b':
        case 'B':
            action2(); // Carry out 2nd action
            break;
        default:
            // The '\a' sends an alert sound (beep)
            cout << "\a" << flush; // Beep on invalid input
            break;
    }

    return 0;
}

// Function to display the menu and get input
int menu() {
    char choice;
    cout << "Enter command (a/A or b/B): ";
    cin >> choice;
    return choice;
}

// Action functions
void action1() {
    cout << "Action 1 executed" << endl;
}

void action2() {
    cout << "Action 2 executed" << endl;
}
