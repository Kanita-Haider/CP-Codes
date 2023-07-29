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
int vis[lim];
bool flag=true;


void bfs(int src){

    vis[src]=1;
    queue<int>q;
    q.push(src);
    
    while(!q.empty()){
        int u=q.front();
        //cout<<u<<endl;
        q.pop();
         for(int i=0; i<adj[u].size();i++){
            int v=adj[u][i];
            if(vis[v]==0 ){
                if(vis[u]==1) vis[v]=2;
                else vis[v]=1;
                q.push(v);
            } 
            else if( vis[v]==vis[u]) {
                //cout<<v<<" "<<u<<endl;

                flag=false;
                }

        }
    }
}


int main()
{
 FAST;
 mset(vis,0);
int n,m;
cin>>n>>m;
for(int i=0; i<n;i++) adj[i].clear();

 for(int i=0; i<m;i++){
     int u,v;
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}
for(int i=1;i<=n;i++){
    if(vis[i]==0){
        bfs(i);
    }
}

if(!flag) cout<<"IMPOSSIBLE"<<endl;
else {
 for(int i=1; i<=n;i++){
     cout<<vis[i]<<" ";
    }
}

return 0;
}