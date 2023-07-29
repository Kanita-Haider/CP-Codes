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
bool vis[lim];
vector<int>edge;

void bfs(int src){

    //memset(dist,-1,sizeof(dist)) ;
    queue<int>q;
    int ux;
    q.push(src);
    //dist[src]=0;
    vis[src]=1;
    while(!q.empty()){

        //int u=q.front();
        ux=q.front();
        q.pop();
         for(int i=0; i<adj[ux].size();i++){
            int v=adj[ux][i];
            if(vis[v]==0){   
                vis[v]=1;  
                q.push(v);
            } 
        }
    }
    edge.pb(ux);
}


int main()
{
 FAST;
 
     
int n,m,cnt=0;
cin>>n>>m;
for(int i=0; i<=n;i++) vis[i]=0;

 for(int i=0; i<m;i++){
     int u,v;
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}

for(int i=1;i<=n;i++){
    if(vis[i]==0){
      //  cout<<i<< "&"<<endl;
        cnt++;
        
        bfs(i);
    }
    
}


//for(int i=1; i<n;i++)   cout<<dist[i]<<"\n";
   cout<<cnt-1<<endl; 
   if(cnt>1){
    int x=edge[0]; int y;
   for(int i=1;i<cnt;i++){
    y=edge[i];
    cout<<x<<" "<<y<<endl;
    x=y;
   }
   }

  
 
return 0;
}