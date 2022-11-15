#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

const int lim=1e5+5;
vector<int>adj[lim];
//vector<pair<int,int>>adj[lim];
bool vis[lim];

void dfs(int u){

    vis[u] = 1;
    for(int i=0; i<adj[u].size();i++){
         int v=adj[u][i];
         if(vis[v]==0)
            dfs(v);
    }
}

int main()
{
 FAST;
int n,m;
cin>>n>>m;

for(int i=0; i<m;i++){
    int u,v,w;
    cin>>u>>v;
   // cin>>u>>v>>w;
    adj[u].pb(v);
    adj[v].pb(u);
   //adj[u].pb({v,w});
   //adj[v].pb({u,w});
}
memset(vis,0,sizeof vis);
dfs(1);

 for(int i=0; i<n;i++){
     cout<<i<<"-> ";
      for(int j=0; j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
     }
 cout<<"\n";
}

return 0;
}