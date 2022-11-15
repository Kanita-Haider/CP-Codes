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
ll a,b,x;
cin>>a>>b>>x;
if(a>b){
   swap(a,b);
}
b=b/x;
if(a%x!=0){
    ll y= (a/x)+1;
    a=y*x;
    a=a/x;
}
else a=a/x;
a=a-1;
ll sum1=(b*(b+1))/2;
ll sum2=(a*(a+1))/2;

ll ans=x*(sum1-sum2);
cout<<ans<<"\n";

return 0;
}