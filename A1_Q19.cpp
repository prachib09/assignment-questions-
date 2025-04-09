//Write a program that calculates the grade of a student based on their marks using if-else/switch statements.
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90) cout << "Grade: A\n";
    else if (marks >= 80) cout << "Grade: B\n";
    else if (marks >= 70) cout << "Grade: C\n";
    else if (marks >= 60) cout << "Grade: D\n";
    else cout << "Grade: F\n";

    return 0;
}