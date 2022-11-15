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
int t,n,k,m,sum=0,res=0;
cin>>n>>k>>m;
int arr[n+5];
 for(int i=1; i<n;i++){
     cin>>arr[i];
     sum+=arr[i];

}
res= (n*m)-sum;
if(res<0) res=0;
if (res>k) cout<<"-1"<<"\n";
else cout<<res<<"\n";
return 0;
}