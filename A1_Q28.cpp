//Develop a program to simulate a number-guessing game where the user has limited attempts to guess a randomly generated number. Provide feedback for each guess (too high, too low) and terminate the game when the number is guessed or attempts are exhausted.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 100 + 1, guess, attempts = 5;

    cout << "Guess a number between 1 and 100 (You have 5 attempts):\n";

    while (attempts--) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == target) {
            cout << "Congratulations! You guessed it right.\n";
            return 0;
        } else if (guess < target) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }
    }

    cout << "Out of attempts! The number was: " << target << endl;
    return 0;
}