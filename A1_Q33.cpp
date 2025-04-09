//Create a program that determines whether a given floating-point number can be represented exactly in binary format and explains why
#include <iostream>
#include <iomanip>
using namespace std;

bool isExactBinary(double num) {
    while (num != (int)num) {
        num *= 2;
        if ((int)num % 2 != 0) return false;
    }
    return true;
}

int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    if (isExactBinary(num))
        cout << "The number can be exactly represented in binary.\n";
    else
        cout << "The number cannot be exactly represented in binary.\n";

    return 0;
}