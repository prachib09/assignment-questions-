//Write a program that solves a quadratic equation (ax^2 + bx + c = 0) using conditional statements to handle all possible cases (real and distinct roots, real and equal roots, complex roots).
#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and equal: " << root << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex: " << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}