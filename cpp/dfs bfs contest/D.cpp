#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

const int lim = 10e5+5;
vector<int>adj[lim];
int dist[lim],vam,ly;

void clr(){
     for(int i=1; i<=lim;i++){
         adj[i].clear();
    }
}

void bfs(int src){

    queue<int>q;
    q.push(src);
    dist[src]=0; vam++;
    while(!q.empty()){

        int u=q.front();
        q.pop();
         for(int i=0; i<adj[u].size();i++){
            int v=adj[u][i];
            if(dist[v]==-1){
                q.push(v);
                if(dist[u]==0) {
                     dist[v]=1; 
                     ly++;   
                }
                else{
                    dist[v]=0;
                    vam++;
                }
            }
        }
    }
}

int main()
{
 FAST;
int t,c=1;
cin>>t;
while(t--){
     memset(dist,-1,sizeof(dist)) ;
     clr();   
    int n,u,v,ans=0; 
    vam=0,ly=0;

    cin>>n;
    for(int i=1; i<=n;i++){
        cin>>u>>v;
        adj[v].pb(u);
        adj[u].pb(v);
    }
     for(int i=1; i<=lim;i++){
         if( !adj[i].empty()  &&  dist[i]==-1)
         {  
            vam=0,ly=0;
            bfs(i);
            ans+=max(vam,ly);
         }
    
    }

    cout<<"Case "<<c<<": "<<ans<<"\n";
    c++;
}

return 0;
}