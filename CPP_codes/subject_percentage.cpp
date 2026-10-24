


#include <iostream>
#include <string>
using namespace std;

int main() {
    string name1 = "You";
    string name2 = "Ananya";
    string name3 = "Rahul";

    float marks1[5], total1 = 0, percentage1;
    float total2 = 450, percentage2 = (total2 / 500) * 100; // Ananya's marks
    float total3 = 420, percentage3 = (total3 / 500) * 100; // Rahul's marks

    cout << " Welcome to the Percentage Calculator!" << endl;
    cout << "----------------------------------------" << endl;

    cout << " Please enter your marks out of 100 for 5 subjects:\n";

    for (int i = 0; i < 5; i++) {
        cout << " Subject " << i + 1 << ": ";
        cin >> marks1[i];
        total1 += marks1[i];
    }

    percentage1 = (total1 / 500) * 100;

    // Display your result
    cout << "\n Summary for " << name1 << ":" << endl;
    cout << "Total Marks: " << total1 << "/500" << endl;
    cout << "Percentage: " << percentage1 << "%" << endl;

    // Display others
    cout << "\n Summary for " << name2 << ": " << total2 << "/500 (" << percentage2 << "%)" << endl;
    cout << " Summary for " << name3 << ": " << total3 << "/500 (" << percentage3 << "%)" << endl;

    // Find Topper
    string topper = name1;
    float topPercent = percentage1;

    if (percentage2 > topPercent) {
        topper = name2;
        topPercent = percentage2;
    }
    if (percentage3 > topPercent) {
        topper = name3;
        topPercent = percentage3;
    }


    // program for user define value

    #include <iostream>
#include <string>
using namespace std;

const int SUBJECTS = 5;
const int STUDENTS = 3;

int main() {
    string names[STUDENTS];
    float marks[STUDENTS][SUBJECTS];
    float totals[STUDENTS] = {0};
    float percentages[STUDENTS];

    cout << " Welcome to the Class Percentage & Topper Finder!" << endl;
    cout << "----------------------------------------------------\n\n";

    // Input student names and marks
    for (int i = 0; i < STUDENTS; i++) {
        cout << " Enter the name of student " << i + 1 << ": ";
        getline(cin, names[i]);

        cout << " Enter marks out of 100 for 5 subjects for " << names[i] << ":\n";
        for (int j = 0; j < SUBJECTS; j++) {
            cout << "    Subject " << j + 1 << ": ";
            cin >> marks[i][j];
            totals[i] += marks[i][j];
        }
        cin.ignore(); // to handle newline after cin
        percentages[i] = (totals[i] / (SUBJECTS * 100)) * 100;

        cout << endl;
    }

    // Display all student results
    cout << " RESULT SUMMARY \n";
    for (int i = 0; i < STUDENTS; i++) {
        cout << "---------------------------------------------\n";
        cout << " Student: " << names[i] << endl;
        cout << "    Total Marks: " << totals[i] << "/500" << endl;
        cout << "    Percentage: " << percentages[i] << "%" << endl;
    }

    // Find topper
    int topperIndex = 0;
    for (int i = 1; i < STUDENTS; i++) {
        if (percentages[i] > percentages[topperIndex]) {
            topperIndex = i;
        }
    }

    cout << "\n Congratulations to the Topper: " << names[topperIndex] << " 🎉" << endl;
    cout << "    Percentage: " << percentages[topperIndex] << "%" << endl;

    return 0;
}
