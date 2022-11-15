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
   ll ans=0,day=0,n,x;
   cin>>n>>x;
   ll arr[n+5];

   for(int i=0; i<n;i++)  cin>>arr[i];
   sort(arr,arr+n);
   for(int i=1; i<n;i++) arr[i]+=arr[i-1];
   for(int i=n-1; i>=0;i--){
   arr[i]+=(i+1)*day;
    //cout<<"arr["<<i<<"] "<<arr[i]<<"\n";
   if((x-arr[i])>=0){
      ll days= ((x-arr[i])/(i+1))+1;
     // cout<<"days "<<days<<"\n";
      ans+=(days* (i+1));
     // cout<<"ans "<<ans<<"\n";
      day+=days;
      // cout<<"day "<<day<<"\n";
      }
   }
   cout<<ans<<"\n";
  // cout<<""<<"\n";
}
return 0;
}