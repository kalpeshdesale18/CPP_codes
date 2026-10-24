#include <iostream>
using namespace std;

// Defining the structure for student
struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    int n;

    cout << " Welcome to the Student Record System!" << endl;
    cout << "----------------------------------------" << endl;

    // Get number of students
    cout << "Enter the number of students: ";
    cin >> n;

    // Declare array of structure
    Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        cout << "\n Enter details for Student " << i + 1 << ":\n";
        cout << "   Name: ";
        cin.ignore(); // To clear newline from previous input
        getline(cin, students[i].name);
        cout << "   Roll No: ";
        cin >> students[i].rollNo;
        cout << "    Marks: ";
        cin >> students[i].marks;
    }

    // Display all student records
    cout << "\n Displaying Student Records:\n";
    cout << "----------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "   Student " << i + 1 << ":\n";
        cout << "   Name   : " << students[i].name << endl;
        cout << "   Roll No: " << students[i].rollNo << endl;
        cout << "   Marks  : " << students[i].marks << "\n\n";
    }

    cout << " All records displayed successfully!" << endl;
    return 0;
}
