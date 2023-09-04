#include <bits/stdc++.h>
using namespace std;

unordered_map<long long int, long long int> memo;

long long int pow(long long int n) {
    if (n == 0) return 1;
    
    if (memo.find(n) != memo.end())
        return memo[n];

    long long int half = pow(n / 2);
    long long int third = pow(n / 3);

    memo[n] = half + third;
    return memo[n];
}

int main() {
    long long int n;
    cin >> n;

    cout << pow(n);

    return 0;
}
