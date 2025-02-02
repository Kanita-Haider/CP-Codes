#include <iostream>
using namespace std;

void removeDuplicates(string& str) {
    int n = str.length();

    if (n < 2) return; // No duplicates if the string length is less than 2

    int index = 0; // Index for the next unique character

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if str[i] is a duplicate of any character before it
        for (int j = 0; j < index; j++) {
            if (str[i] == str[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not a duplicate, add it to the "result" portion of the string
        if (!isDuplicate) {
            str[index++] = str[i];
        }
    }

    // Resize the string to keep only the unique characters
    str.resize(index);
}

int main() {
    string str = "programming";

    removeDuplicates(str);

    cout << "String after removing duplicates: " << str << endl;

    return 0;
}
