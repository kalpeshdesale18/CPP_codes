#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;

    cout << " Welcome to the Number Reverser!" << endl;
    cout << "-----------------------------------" << endl;

    // Take input from user
    cout << " Please enter a positive integer: ";
    cin >> number;

    int original = number;  // Store original number for display

    // Reverse logic
    while (number != 0) {
        int digit = number % 10;            // Get last digit
        reversed = (reversed * 10) + digit; // Append digit
        number = number / 10;               // Remove last digit
    }

    // Output result
    cout << "\n All done!" << endl;
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reversed << endl;
     

    return 0;
}
