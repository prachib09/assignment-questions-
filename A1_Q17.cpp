//Create a program to perform division without using the / operator, implementing both integer and floating-point division manually.
#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
    int quotient = 0;
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    return sign * quotient;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) cout << "Division by zero is not allowed.\n";
    else cout << "Quotient: " << divide(a, b) << endl;
    return 0;
}