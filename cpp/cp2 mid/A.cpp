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
int n,sum=0,ans=-1e5,sum2=0,ans2=-1e5;
cin>>n;
int arr[n+5];
 for(int i=1; i<=n;i++){
     cin>>arr[i];  if(arr[i]>0 )  sum2+=arr[i]; 
     sum+=arr[i];
     ans=max(sum,ans);
    // cout<<ans<<" * "<<sum<<"\n";
     if(sum<0) sum=0;
}   
 sort(arr+1,arr+n+1);
  auto l = lower_bound(arr+1, arr + n+1); 
    cout<<arr[l-arr+1]<<"\n";
//if(sum2<ans) sum2=ans;

cout<<ans<<" "<<sum2<<"\n";
}
return 0;
}