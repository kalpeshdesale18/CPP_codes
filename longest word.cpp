#include <iostream>
#include <sstream>  // for stringstream
using namespace std;

int main() {
    string sentence;
    string word, longestWord = "";
    int maxLength = 0;

    cout << " Enter a sentence: ";
    getline(cin, sentence);

    // Use stringstream to extract words
    stringstream ss(sentence);

    while (ss >> word) {
        if (word.length() > maxLength) {
            maxLength = word.length();
            longestWord = word;
        }
    }

    cout << "\n The longest word is: \"" << longestWord << "\" with length " << maxLength << "." << endl;

    return 0;
}
