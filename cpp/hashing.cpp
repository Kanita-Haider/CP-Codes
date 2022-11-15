#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;


ll hs[100005],ht[100005],pw[100005],prm=131,md=1e9+9,prm2=137,md2=1e9+7;

ll bigmod(ll val,ll p)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        ll res=bigmod(val,p/2);
        return (res*res)%md;
    }
    else return (val*bigmod(val,p-1))%md;
}

int main()
{
 FAST;
 ll t,cs=1;
 pw[0]=1;
 for(ll i=1; i<100005;i++){
     pw[i]=(prm*pw[i-1])%md;
 }
cin>>t;

while (t--)
{
   string s,t;
   cin>>s>>t;
   ll tz=t.size(),ans=0,ssize=s.size();
   hs[0]=s[0]; ht[0]=t[0];

    for(ll i=1; i<ssize;i++){
        hs[i]=(hs[i-1]+(s[i]*pw[i])%md)%md;
    }
    for(ll i=1; i<tz;i++){
        ht[i]=(ht[i-1]+(t[i]*pw[i])%md)%md;
    }

    ll ths=ht[tz-1];

    for(ll i=tz-1; i<ssize;i++){
         ll shs= hs[i];
         if(i-tz>=0){
             shs=(shs-hs[i-1])%md;
             shs=(shs+md)%md;
             shs=(shs*bigmod(pw[i-tz+1],md-2))%md;
         }
        if(shs==ths) 
                ans++;
    }
cout<<ans<<"\n";
}

return 0;
}