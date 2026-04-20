// for while loop
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double rate = 1.15; // Make sure this is defined

    int euro = 1;
    while (euro <= 5) {
        cout << "\t" << euro << "\t" << euro * rate << endl;
        ++euro;
    }

    return 0;
} 