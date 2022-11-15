#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

const int lim = 1e5+5;
vector<int>adj[lim];
bool vis[lim];
int res;

void dfs(int u){
                         // int v;
    vis[u]=1;
    for(int v: adj[u]){  //  for(int i=0; i<adj[u].size();i++){
                         //  v=adj[u][i];
        if(vis[v]==0){
             res++;
            dfs(v);

        }
    }
}

int main()
{
 FAST;
int t,n,m,u,v;
cin>>t;
while( t--){
    int n,m,ans=0;
    cin>>n>>m;
int cnt=0;
for(int i=1; i<=m;i++){
    int u,v;
    cin>>u>>v;
    adj[v].pb(u);
    adj[u].pb(v);
    }

for(int i=1; i<=n;i++){
    //cout<<i<<" "<<vis[i]<<"\n";
    res=1;
    if(vis[i]==0){
        //cnt++;
        dfs(i);
    }
   ans=max(res,ans);

}
cout<<ans<<"\n";
for(int i=0; i<=n;i++) adj[i].clear();
mset(vis,0);

}
return 0;
}