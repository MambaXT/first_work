#include <iostream>
using namespace std;

int main() 
{
    float x, y;

    cout << "Type two different numbers:\n";

    // This checks if the user entered valid numbers (e.g., not letters)
    if (!(cin >> x && cin >> y)) 
    {
        cout << "\nInvalid input!" << endl;
    }
    else 
    {
        // Using the ternary operator to find the maximum:
        // (condition ? value_if_true : value_if_false)
        cout << "\nThe greater value is: " << (x > y ? x : y) << endl;
    }

    return 0;
}