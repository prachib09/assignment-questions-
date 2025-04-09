//Create a program that determines whether a given number is prime using a while loop.
#include <iostream>
using namespace std;

int main() {
    int n, i = 2;
    bool isPrime = true;
    
    cout << "Enter a number: ";
    cin >> n;

    if (n < 2) isPrime = false;
    else {
        while (i * i <= n) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }

    if (isPrime) cout << "Prime number\n";
    else cout << "Not a prime number\n";

    return 0;
}