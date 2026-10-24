#include <iostream>
using namespace std;

// Function to rotate the array to the right by k positions
void rotateArray(int arr[], int n, int k) {
    k = k % n;  // In case k > n

    // Create a temporary array
    int temp[n];

    // Copy the last k elements to the front
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the first (n-k) elements
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

// Function to display array
void displayArray(int arr[], int n) {
    cout << " Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;

    cout << "📥 Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << " Enter the number of positions to rotate: ";
    cin >> k;

    rotateArray(arr, n, k);
    displayArray(arr, n);

    return 0;
}
