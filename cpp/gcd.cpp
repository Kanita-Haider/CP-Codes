#include<bits/stdc++.h>
#define ll long long 
#define llu long long unsigned 
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//freopen(E:/vs code/input.txt, r, stdin);
//freopen(E:/vs code/output.txt, w, stdout);
//#endif  
ll a,b;
cin>>a>>b;
// for(int i=1; i<=t;i++){
//}
cout<<gcd(a,b)<<" "<<lcm(a,b)<<"\n";
 return 0;
}