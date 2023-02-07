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




int main()
{
 FAST;
int t;
cin>>t;
while(t--){
int n,ans=0,m,d ,mov=0;
cin>>n>>m>>d;
//cout<<n<<m<<d<<nl;

int p[n+5],arr[m+5], pos[n+5];

for(int i=0;i<n;i++){
    int x;
     cin>>x; 
     pos[x]=i;
    //cout<<pos[x]<<" "<<x<<nl;
     }

for(int i=0;i<m;i++) 
        cin>>arr[i];

ans=1e8;
for(int i=0;i<m-1;i++){

    //cout<<pos[arr[i]]<<" "<< pos[arr[i+1]]<<nl;
    if(pos[arr[i]]> pos[arr[i+1]]) {
        ans=0; break;
    }
    else if(pos[arr[i+1]]>pos[arr[i]]+d){
        ans=0; break;
    }
    else {
        
        ans=min(ans,pos[arr[i+1]]-pos[arr[i]]);
        if(d+1<n) ans=min(ans,d+1-(pos[arr[i+1]]-pos[arr[i]]));
        
    }
    
}


cout<<ans<<nl;
}
return 0;
} 


