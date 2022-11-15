#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

const int lim=1e5+5;
int n,m;
vector<int>adj[lim];
int arr[lim],ans;

void dfs(int u, int par, int sum){
     // cout<<u<<" arr [u] "<<arr [u]<<"\n";
    if(arr [u]==1) sum++;
    else sum=0;
    if (sum>m ) return;

     for(int v: adj[u]){
         if(v!=par)  dfs(v,u,sum);
    }
    if(adj[u].size()== 1 && u!=1) 
          {  ans++;
          //cout<<"cat "<<sum<<"\n";
          //cout<<"node "<<u<<"\n";
          }

}

int main()
{
 FAST;
cin>>n>>m;

for(int i=1; i<=n;i++){
    cin>>arr[i];
}

for(int i=1; i<=n-1;i++){
    int u,v,w;
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}
dfs(1,1,0);
cout<<ans<<"\n";

return 0;
}