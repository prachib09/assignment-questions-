//Develop a program that checks if a triangle is valid based on the lengths of its sides and determines its type (equilateral, isosceles, or scalene) using nested if-else statements.
#include<iostream>
using namespace std;

int main() {
    double side1, side2, side3;

    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        cout << "It is a valid triangle.\n";

        if (side1 == side2 && side2 == side3) {
            cout << "It is an Equilateral triangle.\n";
        } else {
            if (side1 == side2 || side1 == side3 || side2 == side3) {
                cout << "It is an Isosceles triangle.\n";
            } else {
                cout << "It is a Scalene triangle.\n";
            }
        }
    } else {
        cout << "It is NOT a valid triangle.\n";
    }

    return 0;
}
