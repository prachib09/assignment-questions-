//Develop a program that takes two integers as input and determines if the first is a multiple of the second using relational and logical operators.
#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter the first integer: ";
    cin >> a;

    cout << "Enter the second integer: ";
    cin >> b;

    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else if (a % b == 0) {
        cout << a << " is a multiple of " << b << endl;
    } else {
        cout << a << " is not a multiple of " << b << endl;
    }

    return 0;
}