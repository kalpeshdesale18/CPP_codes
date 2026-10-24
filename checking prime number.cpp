#include <iostream>
using namespace std;

int main() {
    int num, i, flag = 0;

    // Input number
    cout << "Enter a number: ";
    cin >> num;

    // Edge case: numbers less than or equal to 1 are not prime
    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                flag = 1;  // Not prime
                break;
            }
        }

        if (flag == 0)
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }

    return 0;
}
