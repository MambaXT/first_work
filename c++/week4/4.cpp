#include <iostream>
#include <cctype> // Required for character handling functions like toupper()

using namespace std;

// Function Prototypes
int menu();
void action1();
void action2();

int main() {
    // The function menu() reads a command from the user
    int command = menu(); 

    // Evaluate the command
    switch(command) {
        case 'a':
        case 'A': // If command is 'a', it "falls through" to 'A'
            action1(); // Carry out 1st action
            break;
        case 'b':
        case 'B':
            action2(); // Carry out 2nd action
            break;
        default:
            // The '\a' character triggers a system alert beep
            cout << "\a" << flush; // Beep on invalid input
    }

    return 0;
}

// Displays the prompt and returns the user's character
int menu() {
    char choice;
    cout << "Enter command (a/A or b/B): ";
    cin >> choice;
    return choice;
}

// First action definition
void action1() {
    cout << "Action 1 executed" << endl;
}

// Second action definition
void action2() {
    cout << "Action 2 executed" << endl;
}
