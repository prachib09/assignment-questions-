#include <iostream>
#include <unordered_map>
#include <cctype>
using namespace std;

bool isPalindrome(string str) {
    int start = 0, end = str.length() - 1;

    while (start < end) {
        
        while (start < end && !isalnum(str[start])) start++;
        while (start < end && !isalnum(str[end])) end--;

        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }

        start++;
        end--;
    }
    return true;
}

void countCharacterFrequency(string str) {
    unordered_map<char, int> freq;

    for (char c : str) {
        if (isalnum(c)) {
            freq[tolower(c)]++;
        }
    }

    cout << "Character frequencies: \n";
    for (auto pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

void replaceVowels(string &str, char replacement) {
    for (char &c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            c = replacement;
        }
    }
}

int main() {
    string str;
    char replacementChar;

    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    countCharacterFrequency(str);

    cout << "Enter a character to replace vowels with: ";
    cin >> replacementChar;

    replaceVowels(str, replacementChar);
    
    cout << "Updated string with vowels replaced: " << str << endl;

    return 0;
}
