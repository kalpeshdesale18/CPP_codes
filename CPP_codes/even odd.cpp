#include <iostream>
using namespace std;

int main() {
    int num;

    // Input number from user
    cout << "Enter a number: ";
    cin >> num;

    // Check even or odd
    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }

    return 0;
}
