#include <bits/stdc++.h>
using namespace std;

void generateStrings(int n, string current, char lastChar) {
    if (n == 0) {
        cout << current << endl;
        return;
    }
    
    for (char c = 'a'; c <= 'c'; ++c) {
        if (c != lastChar) {
            generateStrings(n - 1, current + c, c);
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    generateStrings(N, "", 'd');
    
    return 0;
}
