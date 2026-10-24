#include <iostream>
using namespace std;

int main() {
    int n;

    cout << " Welcome to the Duplicate Remover!" << endl;
    cout << "-------------------------------------" << endl;

    // Input size of array
    cout << " Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << " Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "  Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Remove duplicates
    int unique[n]; // to store unique values
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if current element is already in unique[]
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add to unique[]
        if (!isDuplicate) {
            unique[newSize] = arr[i];
            newSize++;
        }
    }

    // Display result
    cout << "\n All duplicates removed!" << endl;
    cout << " Array with unique elements:\n[ ";
    for (int i = 0; i < newSize; i++) {
        cout << unique[i] << " ";
    }
    cout << "]" << endl;

     
    return 0;
}
