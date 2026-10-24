#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << " Welcome to the Vowel or Consonant Checker!" << endl;
    cout << "-----------------------------------------------" << endl;

    // Get character input from user
    cout << " Please enter a single alphabet character: ";
    cin >> ch;

    // Check if input is an alphabet
    if (!isalpha(ch)) {
        cout << "Oops! '" << ch << "' is not an alphabet. Please enter a valid letter." << endl;
    } else {
        // Convert to lowercase for easy comparison
        char lower = to lower(ch);

        // Check if vowel
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            cout << "<< ch << "' is a **Vowel**. Nice choice!" << endl;
        } else {
            cout << "  << ch << "' is a **Consonant**. Great!" << endl;
        }
    }

     
    return 0;
}
