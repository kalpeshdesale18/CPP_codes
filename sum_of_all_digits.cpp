#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, digit;

    cout << " Welcome to the Digit Sum Calculator!" << endl;
    cout << "---------------------------------------" << endl;

    // Ask user to enter a number
    cout << " Please enter a positive number: ";
    cin >> number;

    int original = number; // Store the original number

    // Calculate the sum of digits
    while (number != 0) {
        digit = number % 10;   // Extract last digit
        sum += digit;          // Add digit to sum
        number = number / 10;  // Remove last digit
    }

    // Display the result
    cout << "\n Calculation complete!" << endl;
    cout << "Original Number: " << original << endl;
    cout << "Sum of its digits: " << sum << endl;
     
    return 0;
}
