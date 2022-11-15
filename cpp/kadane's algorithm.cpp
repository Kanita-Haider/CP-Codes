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
int t,n;
cin>>t;
while(t--){
   ll sum=0,ans=-1e18,l=0,maxl=-1;
cin>>n;
ll arr[n+5];
 for(int i=1; i<=n;i++){
      cin>>arr[i];
      sum+=arr[i];
     ans=max(ans,sum);

   if(sum<0) sum=0;
      }

cout<<ans<<"\n";
}
return 0;
}