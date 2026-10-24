#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get matrix size from user
    cout << " Enter number of rows: ";
    cin >> rows;
    cout << " Enter number of columns: ";
    cin >> cols;

    int matrix[100][100], transpose[100][100];

    // Input elements of matrix
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Transpose logic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output original matrix
    cout << "\n📄 Original Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Output transpose matrix
    cout << "\n🔁 Transpose Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
