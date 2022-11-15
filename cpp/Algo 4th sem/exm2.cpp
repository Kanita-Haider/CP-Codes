#include<bits/stdc++.h>
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
        cout<<u<<"\n";
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
int n,m;
cin>>n>>m;
for(int i=0; i<n;i++) adj[i].clear();

 for(int i=0; i<m;i++){
     int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int src=0;
bfs(src);
 
return 0;
}