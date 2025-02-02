#include <iostream>
#include <string>
using namespace std;

bool isRotation(const string& s1, const string& s2) {
    // Check if lengths are equal and strings are non-empty
    if (s1.length() != s2.length() || s1.empty() || s2.empty()) {
        return false;
    }

    // Concatenate s1 with itself
    string concatenated = s1 + s1;

    // Check if s2 is a substring of the concatenated string
    return concatenated.find(s2) != string::npos;
}

int main() {
    string s1 = "abcdef";
    string s2 = "defabc";

    if (isRotation(s1, s2)) {
        cout << s2 << " is a rotation of " << s1 << endl;
    } else {
        cout << s2 << " is NOT a rotation of " << s1 << endl;
    }

    return 0;
}
