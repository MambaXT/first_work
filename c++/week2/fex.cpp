#include <iostream>
#include <string>
using namespace std;

int main() {
string str = "I have learned something new again!";
cout << "String: " << str << endl;
cout << "Length: " << str.length() << endl;
string line1, line2;
cout << "\nEnter first line: ";
getline(cin, line1);

cout << "Enter second line: ";
getline(cin, line2);
string result = line1 + " * * " + line2;
cout << "\nConcatenated String: " << result << endl;
return 0;
}