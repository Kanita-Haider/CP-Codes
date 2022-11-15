#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
int findDigits(int n)
{
    // factorial exists only for n>=0
    if (n < 0)
        return 0;
 
    // base case
    if (n <= 1)
        return 1;
 
    // else iterate through n and calculate the
    // value
    double digits = 0;
    for (int i=2; i<=n; i++)
        digits += log10(i);
 
    return floor(digits) + 1;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//freopen(E:/vs code/input.txt, r, stdin);
//freopen(E:/vs code/output.txt, w, stdout);
//#endif  
int t;
cin>>t;
 
cout<<"Number of digits of "<<t<<"! is "<<findDigits(t)<<"\n";

 return 0;
}