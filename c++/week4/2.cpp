#include <iostream>
using namespace std;

// Placeholder functions for the actions mentioned in the slide
void action1() { cout << "Executing Action 1" << endl; }
void action2() { cout << "Executing Action 2" << endl; }

int main() {
    char command;
    cout << "Enter command (a or b): ";
    cin >> command;

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
            cout << "\a" << flush; // Beep on invalid input
            cout << "Invalid input!" << endl;
    }

    return 0;
}
