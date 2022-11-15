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
int vis[lim],parent[lim];
int nd,cycle;

void dfs(int u){
    vis[u]=2;
    nd++;
     //  cout<<u<< " "<<f<<endl;
    for(int v: adj[u]){
        if(vis[v]==0)
           {  
               parent[v]=u;
               dfs(v);
           }
     else if(vis[v]==2 && v!=parent[u]){
          cycle=1;
          return;

     }
    }
  //vis[u]=1;
}

int main()
{
 FAST;
int t,n,m,u,v;
cin>>t;
while(t--){
    cin>>n>>m;
    for(int i=0; i<n;i++) adj[i].clear();
int ans=0;
for(int i=1; i<=m;i++){
    int u,v;
    cin>>u>>v;
    adj[v].pb(u);
    adj[u].pb(v);
    }

for(int i=1; i<=n;i++){
    if(vis[i]==0){
     nd=0,cycle=0;
        
        dfs(i);
       
       //cout<<nd<<" nd\n";
       if(cycle==1){
       ans++;
       }
    }
    
}
 cout<<ans<<"\n";
mset(vis,0);
mset(parent,0);

}
return 0;
}