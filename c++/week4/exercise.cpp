#include <iostream>
#include <iomanip> // This allows us to use setw() to align the numbers

using namespace std;

int main() {
    cout << "****** MULTIPLICATION TABLE ******" << endl << endl;

    // 1. Print the top header row (numbers 1 to 10)
    cout << "    "; // Space for the side column
    for (int i = 1; i <= 10; i++) {
        cout << setw(4) << i; 
    }
    cout << "\n--------------------------------------------" << endl;

    // 2. Use nested loops to build the table
    for (int row = 1; row <= 10; row++) {
        
        // Print the side column number followed by a bar
        cout << setw(2) << row << " |";

        for (int col = 1; col <= 10; col++) {
            // Multiply row by column and align it with a width of 4
            cout << setw(4) << (row * col);
        }
        
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
