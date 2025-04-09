//Develop a program to check whether a year is a leap year using nested if-else statements.
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap year\n";
    else
        cout << "Not a leap year\n";

    return 0;
}