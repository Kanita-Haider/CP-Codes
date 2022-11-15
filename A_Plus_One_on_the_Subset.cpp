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
ll n;
ll arr[n+5];
cin>>t;
while(t--){
cin>>n;
cout<<n<<"\n";
 for(int i=1; i<=n;i++){
     cin>>arr[i];
    cout<<arr[i]<<" "<<"\n";
}
sort(arr,arr+n+1);
cout<<arr[n]-arr[1]<<"\n";
}
return 0;
}