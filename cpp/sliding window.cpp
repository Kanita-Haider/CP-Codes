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
int t,k;
cin>>t>>k;
int arr[t+5];
 for(int i=1; i<=t;i++){
cin>>arr[i];
}
int l=1,r=1;
int sum=0,ans=0;
while(l<=t){
    while(r<=t && sum+arr[r]<=k){
        sum+=arr[r];
        r++;
    }
    ans=max(ans,sum);
    sum-=arr[l];
    l++;
}
cout<<ans<<"\n";
return 0;
}