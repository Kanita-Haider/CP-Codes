#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int f(int q,int a,int b){
    if(q==1) return a;
    else if(q==2) return b;
    f(q-1,a,b);
    
}
int f1(int q,int a,int b){
    if(q==1) return a;
    else if(q==2) return b;
    f1(q-2,a,b);

}

int main()
{
 FAST;
ll t,a,b,q;
cin>>a>>b>>q;
if(q==1) cout<<a<<"\n";
else if( q==2)  cout<<b<<"\n";
else {
    ll ans=f(q-1,a,b)^f1(q-2,a,b);
    cout<<ans<<"\n";
}

return 0;
}