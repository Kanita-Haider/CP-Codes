#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;


int main() {
    int N;
   
   char op;

    // Input the initial integer and operations
    cin >> N;

    // Iterate through the operations and apply them to N
    while (cin>>op) {
        if (op == '1') {
            N += 5;
        } else if (op == '2') {
            N -= 1;
        } else if (op == '3') {
            N *= 3;
        } else if (op == '4') {
            N /= 2;
        } else if (op == '5') {
            N = N % 10;
        }
    }

    // Output the final result
    cout << N << endl;

    return 0;
}
