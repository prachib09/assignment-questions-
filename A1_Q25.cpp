/*Create a program that continuously accepts user input of integers until the user types “exit”. At the end, display:

i)The sum of all entered numbers.

ii)The count of valid integers entered.

iii)The maximum and minimum numbers.*/
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int num, sum = 0, count = 0, maxNum = INT_MIN, minNum = INT_MAX;
    string input;

    cout << "Enter numbers (type 'exit' to stop): \n";
    while (true) {
        cin >> input;
        if (input == "exit") break;

        bool valid = true;
        for (char c : input) {
            if (!isdigit(c) && c != '-') {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "Invalid input. Enter a number or 'exit'.\n";
            continue;
        }

        num = stoi(input);
        sum += num;
        count++;
        if (num > maxNum) maxNum = num;
        if (num < minNum) minNum = num;
    }

    if (count > 0) {
        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
        cout << "Max: " << maxNum << endl;
        cout << "Min: " << minNum << endl;
    } else {
        cout << "No valid numbers entered.\n";
    }

    return 0;
}