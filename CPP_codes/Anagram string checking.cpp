#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;

    cout << " Enter first word: ";
    cin >> str1;
    cout << " Enter second word: ";
    cin >> str2;

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
        cout << " The words are Anagrams!" << endl;
    else
        cout << " Not Anagrams." << endl;

    return 0;
}
