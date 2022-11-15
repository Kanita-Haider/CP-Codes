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
int t,n,m,k,a=0,b,x,y;
cin>>t>>m>>k;

ll arr[100005],prefix[100005],s[100005],l[100005],r[100005],d[100005];
        mset(prefix,0);
        mset(s,0);
 for(int i=1; i<=t;i++){
    cin>>arr[i];
}
 for(int i=1; i<=m;i++){
        cin>>l[i]>>r[i]>>d[i];
}
 for(int i=1; i<=k;i++){
        cin>>x>>y;
        s[x]++; s[y+1]--;
}
for(int i=1; i<=m;i++){
        s[i]=s[i]+s[i-1];
}
 
 for(int i=1; i<=m;i++){
        prefix[l[i]]+=  s[i]*d[i];
        prefix[r[i]+1]-=  s[i]*d[i];
}
 for(int i=1; i<=t;i++){
         prefix[i]=prefix[i-1]+prefix[i];
}
 for(int i=1; i<=t;i++){
         arr[i]=arr[i]+prefix[i];
                cout<<arr[i]<<" ";
}
return 0;
}