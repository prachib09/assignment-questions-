//Create a program to find the first number greater than 50 that is divisible by 7.
#include <iostream>
using namespace std;

int main() {
    int num = 51;
    while (num % 7 != 0) {
        num++;
    }
    cout << "First number greater than 50 divisible by 7 is: " << num << endl;
    return 0;
}