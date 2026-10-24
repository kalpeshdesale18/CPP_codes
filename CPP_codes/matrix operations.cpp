#include <iostream>
using namespace std;

const int SIZE = 10; // max size

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE];
    int rows, cols, choice;

    cout << " Welcome to the Matrix Operations Tool!" << endl;
    cout << "-----------------------------------------" << endl;

    // Input matrix dimensions
    cout << " Enter number of rows: ";
    cin >> rows;
    cout << " Enter number of columns: ";
    cin >> cols;

    // Input Matrix A
    cout << "\n Enter elements of Matrix A:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "\n📥 Enter elements of Matrix B:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Menu for operation
    cout << "\n🔧 What operation would you like to perform?" << endl;
    cout << "1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (×)\n";
    cout << " Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: // Addition
            cout << "\n Performing Matrix Addition...\n";
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    result[i][j] = A[i][j] + B[i][j];
            break;

        case 2: // Subtraction
            cout << "\n Performing Matrix Subtraction...\n";
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    result[i][j] = A[i][j] - B[i][j];
            break;

        case 3: // Multiplication
            if (cols > SIZE) {
                cout << " Matrix size too large for multiplication!" << endl;
                return 1;
            }

            cout << "\n Performing Matrix Multiplication...\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result[i][j] = 0;
                    for (int k = 0; k < cols; k++) {
                        result[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            break;

        default:
            cout << " Invalid choice. Please restart and select between 1 and 3." << endl;
            return 1;
    }

    // Print result
    cout << "\n Resulting Matrix:\n";
    for (int i = 0; i < rows; i++) {
        cout << "[ ";
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << "]\n";
    }

     
    return 0;
}
