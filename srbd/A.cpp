#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <ll, ll>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
ll md=LLONG_MAX;
ll power(ll val,ll pw)
{
    if(pw==0)return 1;
    if(pw%2==0)
    {
        ll tmp=power(val,pw/2)%md;
        return (tmp*tmp)%md;
    }
    else return (val*power(val,pw-1))%md;
}



int main()
{
 FAST;
ll t=0;
cin>>t;
while(t--){
ll n,ans=0,b,y,most, r1,r2,flag=1;
cin>>b>>y;
most=b/y;

for(ll i=most;i>0;i--){
    if(i%2==0) r1=r2=i/2;
    else{
        r1=r2=i/2;
        r1++;
    }
    ans=r1*r1+r2*r2+y*i;
    if(ans<=b) {
        ans=power(2,i);
        cout<<ans<<nl;
    flag=0;
        break;
    }
    
}
if(flag==1)
cout<<1<<nl;
}
return 0;
} 

