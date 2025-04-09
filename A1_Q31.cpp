//Develop a program to reverse the digits of a given number and terminate early if the reversed number becomes a palindrome.
#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;

    if (num == reversed) {
        cout << "Palindrome detected, terminating early.\n";
    }

    return 0;
}