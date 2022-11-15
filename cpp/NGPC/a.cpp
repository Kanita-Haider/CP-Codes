#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
//LLONG_MAX, LLONG_MIN, INT_MIN, INT_MAX
using namespace std;

int main()
{
 FAST;
 int t, n, m, i, j, k, x, y, z, r, f=0, flag=0, cnt=0,  mn = 1000000000 ;
    ll sum=0,res=0,mx=-1e18;
    //int f = 0, cnt = 0, y = 0, mx = -1000000000 ;
    cin>>n>>m ;
    ll p[m+5], s[m+5], d[n+5] ,arr[m+5];
    for(i=1; i<=m; i++)
        cin>>p[i] ;
    for(i=1; i<=m; i++){
        cin>>s[i] ;
        arr[i]=(p[i]*n)+s[i];
    }
    for(i=1; i<=n; i++){
        cin>>d[i] ;
        sum+=d[i];
    }
    for(i=1; i<=m; i++)
    {
        res=sum-arr[i];
        //res1=max(res1,res);    
        if(res>mx) mx=res;
        
    }
if(mx>0) cout<<"Profit "<<mx<<"\n";
else if(mx==0) cout<<"Neutral"<<"\n";
else cout<<"Loss "<<abs(mx)<<"\n";

return 0;
}