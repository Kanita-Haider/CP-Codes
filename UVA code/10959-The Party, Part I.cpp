#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

const int lim=1e5+5;
vector<int>adj[lim];
int dist[lim];

void bfs(int src){

    memset(dist,-1,sizeof(dist)) ;
    queue<int>q;
    q.push(src);
    dist[src]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
         for(int i=0; i<adj[u].size();i++){
            int v=adj[u][i];
            if(dist[v]==-1){
                dist[v]=dist[u]+1;
                q.push(v);
              
            } 
        }
    }
}


int main()
{
 FAST;
 int t;
 cin>>t;
 while(t--){
     
int n,m;
cin>>n>>m;
 for(int i=0; i<n;i++) adj[i].clear();

 for(int i=0; i<m;i++){
     int u,v;
     cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}
int src=0;
bfs(src);
 for(int i=1; i<n;i++){
     cout<<dist[i]<<"\n";

    }
   if(t)
    cout<<"\n";
 }
return 0;
}