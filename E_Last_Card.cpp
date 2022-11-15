#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
int t,n,k,a;
cin>>n>>k>>a;
t=k%n;
//if (t>0) t=t-1;
if((a+t-1)==0) cout<<n<<"\n";
else if( (a+t-1)>n) cout<<(a+t-1)-n<<"\n";
else
cout<<a+t-1<<"\n";
}