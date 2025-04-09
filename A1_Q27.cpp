//Create a program that finds and displays all Armstrong numbers within a given range using nested loops.
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    
    while (temp) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int start, end;
    cout << "Enter range (start and end): ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}