#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

const int lim = 1e3 + 5 ;
const int inf = 1e9 ;

typedef  pair <int, int>  pii ;


int n, m ;

vector<pii > adj[lim] ;

int dis[lim] ;
bool vis[lim] ;


void dijkstra(int src){
    for(int i = 0; i < n; i++){
        dis[i] = inf ;
        vis[i] = 0 ;
    }

    dis[src] = 0 ;

    for(int i = 0; i < n; i++){
        int u = -1 ;
        for(int j = 0; j < n; j++){
            if(vis[j]==0 && (u==-1 || dis[j] < dis[u] ))
                u = j ;
        }

        vis[u] = 1 ;
        for(pii nd: adj[u]){
            int v = nd.first, w = nd.second ;

            if(dis[u]+w < dis[v])
                dis[v] = dis[u] + w ;
        }
    }
}


int main (){
    
    cin>> n >> m ;

    for(int i = 0; i <= n; i++){
        adj[i].clear() ;
    }

    for(int i = 0; i < m; i++){
        int u, v, w ;
        cin>> u >> v >> w ;
        adj[u].push_back({v, w}) ;
        adj[v].push_back({u, w}) ;
    }

    int src = 0 ;

    dijkstra(src) ;

    for(int i = 0; i < n; i++)
        cout<< i << " : " << dis[i] << endl ;

    return 0 ;
}


