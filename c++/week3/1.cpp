#include <iostream>
using namespace std;

int main() {
    int x, count = 0; // Renamed from cout to count
    float sum = 0.0;

    cout << "Please enter some integers: " << endl;
    while (cin >> x) {
        sum += x;
        ++count; // Increment your new counter variable
    }

    // Use count for the calculation
    cout << "The average of the numbers: " << sum / count << endl;
    return 0;
}
