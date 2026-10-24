#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], merged[200];
    int n1, n2, i = 0, j = 0, k = 0;

    cout << " Welcome! Let's merge two sorted arrays." << endl;

    // Input first array
    cout << " Enter number of elements in first sorted array: ";
    cin >> n1;
    cout << "Enter " << n1 << " sorted elements:\n";
    for (int x = 0; x < n1; x++) {
        cout << "a[" << x << "] = ";
        cin >> a[x];
    }

    // Input second array
    cout << "\n Enter number of elements in second sorted array: ";
    cin >> n2;
    cout << "Enter " << n2 << " sorted elements:\n";
    for (int x = 0; x < n2; x++) {
        cout << "b[" << x << "] = ";
        cin >> b[x];
    }

    // Merge both arrays
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Add remaining elements
    while (i < n1) {
        merged[k++] = a[i++];
    }
    while (j < n2) {
        merged[k++] = b[j++];
    }

    // Output merged array
    cout << "\n Merged Sorted Array:\n[ ";
    for (int x = 0; x < k; x++) {
        cout << merged[x] << " ";
    }
    cout << "]" << endl;

     
    return 0;
}




//find largest number in array

#include <iostream>
using namespace std;

int main() {
    int arr[100], n, largest;

    cout << "🔍Welcome! Let's find the largest number in an array!" << endl;
    cout << "------------------------------------------------------" << endl;

    // Input number of elements
    cout << " Enter how many elements you want in the array: ";
    cin >> n;

    // Input array elements
    cout << " Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << " Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Assume first element is the largest
    largest = arr[0];

    // Compare with the rest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Show the result
    cout << "\n The largest number in the array is: " << largest << endl;
     
    return 0;
}



//finding elements in array

#include <iostream>
using namespace std;

int main() {
    int arr[100], n, searchElement, found = 0;

    cout << " Welcome to Array Element Search!" << endl;
    cout << "----------------------------------" << endl;

    // Input the size of array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input elements
    cout << " Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "    arr[" << i << "] = ";
        cin >> arr[i];
    }

    // Input the element to search
    cout << "\n Enter the element you want to search: ";
    cin >> searchElement;

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            cout << " Element found at index " << i << " (position " << i + 1 << ")" << endl;
            found = 1;
            break;
        }
    }

    if (!found) {
        cout << " Element not found in the array!" << endl;
    }

    cout << " Search complete!" << endl;

    return 0;
}


// sort the array in ascending order

#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << " Welcome to Array Sorting in Ascending Order!" << endl;
    cout << "------------------------------------------------" << endl;

    // Input number of elements
    cout << " Enter the number of elements in the array: ";
    cin >> n;

    // Input elements
    cout << " Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // Sorting using Bubble Sort
    cout << "\n Sorting the array...\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output sorted array
    cout << "\n Array sorted in ascending order:\n[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

     

    return 0;
}



//calculate sum and average of array elements

#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int sum = 0;
    float average;

    cout << " Welcome to Array Sum & Average Calculator!" << endl;
    cout << "--------------------------------------------" << endl;

    // Input the size of array
    cout << "Enter how many elements you want in the array: ";
    cin >> n;

    // Input array elements
    cout << " Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << "    Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];  // Accumulate the sum here
    }

    // Calculate average
    average = (float)sum / n;

    // Output results
    cout << "\n Total Sum of elements = " << sum << endl;
    cout << " Average of elements = " << average << endl;

     

    return 0;
}
