#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;

    cout << " Welcome to the Simple Interest Calculator!" << endl;
    cout << "---------------------------------------------" << endl;

    // User input
    cout << " Enter the Principal amount (Rs): ";
    cin >> principal;

    cout << " Enter the Rate of Interest (% per annum): ";
    cin >> rate;

    cout << " Enter the Time (in years): ";
    cin >> time;

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Display result
    cout << "\n Calculation Complete!" << endl;
    cout << "------------------------------" << endl;
    cout << "Principal Amount: Rs " << principal << endl;
    cout << "Rate of Interest: " << rate << "%" << endl;
    cout << "Time Period: " << time << " years" << endl;
    cout << "----------------------------------" << endl;
    cout << "Simple Interest = Rs " << interest << endl;

    return 0;
}
