//Create a program to count the number of 1 bits in an integer input by the user.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    int count = 0;
    int n;
    while (n > 0) {
    count += (n & 1); 
    n >>= 1;         
    }

    cout << "The number of 1 bits is: " << count << endl;
    return 0;
}