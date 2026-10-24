#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0, remainder, original;

    cout << " Welcome to the Palindrome Checker!" << endl;
    cout << "--------------------------------------" << endl;

    // Input from user
    cout << "Please enter a number: ";
    cin >> number;

    original = number; // Save original number for comparison

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversed = (reversed * 10) + remainder;
        number = number / 10;
    }

    // Display results
    cout << "\n Processing complete!" << endl;
    cout << "Original Number: " << original << endl;
    cout << "Reversed Number: " << reversed << endl;

    // Check if palindrome
    if (original == reversed) {
        cout << " Great! " << original << " is a PALINDROME number!" << endl;
    } else {
        cout << " Oops! " << original << " is NOT a palindrome number." << endl;
    }

    return 0;
}
