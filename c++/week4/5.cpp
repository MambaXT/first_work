#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    unsigned int seed;

   
    cout << "Enter a seed value (0-65535): ";
    cin >> seed;

    srand(seed);

    cout << "20 random numbers between 1 and 100:" << endl;

   
    for (int i = 0; i < 20; ++i) {
        
        int randomNumber = (rand() % 100) + 1;
        cout << randomNumber << " ";
    }

    cout << endl;

    return 0;
}
