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
int t;
cin>>t;
while(t--){
ll l,r,a,l1,r1,ans=0;
cin>>l>>r>>a;
l1=l % a;
r1=r % a;
cout<<l1<<" "<<r1<<"\n";
if(l1==0 && r1==0){
    r=r-1;
    ans=(floor(r/a))+(r%a);
}
else if(l1>r1){
     ans=(floor(l/a))+(l%a);
}
else if (r1>l1){
    ans=(floor(r/a))+(r%a);
    
     }
else {
     ans=(floor(r/a))+(r%a);
}
    cout<<ans<<"\n";
}
//cout<<1%3<<"\n";
return 0;
}