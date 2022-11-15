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

void dfs(int u){
    vis[u]=1;
    for(int v: adj[u]){
        if(vis[v]==0)
            dfs(v);
    }
}

int main()
{
 FAST;
int t=1,n,m,u,v;
//cin>>t;
while( cin>>n>>m){
   if(n==0 && m==0)  break;
    
int cnt=0;
for(int i=1; i<=m;i++){
    int u,v;
    cin>>u>>v;
    adj[v].pb(u);
    adj[u].pb(v);
    }

for(int i=1; i<=n;i++){
    //cout<<i<<" "<<vis[i]<<"\n";
    if(vis[i]==0){
        cnt++;
        dfs(i);
    }

}
cout<<"Case "<<t<<": "<<cnt<<"\n";
t++;
for(int i=0; i<n;i++) adj[i].clear();
mset(vis,0);

}
return 0;
}