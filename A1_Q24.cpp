//Write a program to calculate the factorial of a number using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    do {
        fact *= i;
        i++;
    } while (i <= n);

    cout << "Factorial: " << fact << endl;
    return 0;
}