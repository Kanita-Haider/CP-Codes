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
int t,arr[2e5],f[2e5];
cin>>t;
int n,k;
int ans,count;
while (t--)
{
    mset(arr,0); ans=0,count=0;
    cin>>n>>k;
     for(int i=0; i<n;i++){
         cin>>arr[i];
         f[arr[i]]++;
    }


    for(int i=0; i<n;i++){

    if(f[arr[i]]>0 && f[arr[i]]<=k) {
        
    }
     cout<<<<"\n";
    }

    cout<<ans+(count/2)<<"\n";
   // cout<<""<<"\n";
}

return 0;
}