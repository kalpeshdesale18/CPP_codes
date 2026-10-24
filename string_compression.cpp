#include <iostream>
#include <string>
using namespace std;

// Function to compress the string
string compressString(const string& str) {
    string compressed = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        // Count consecutive characters
        while (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Append character and its count
        compressed += str[i] + to_string(count);
        count = 1;
    }

    // Return the shorter one
    return (compressed.length() < str.length()) ? compressed : str;
}

int main() {
    string input;

    cout << "📥 Enter a string to compress: ";
    cin >> input;

    string result = compressString(input);
    cout << " Compressed string: " << result << endl;

    return 0;
}
