#include<bits/stdc++.h>
using namespace std;

#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>           
#define   pll       pair <ll , ll >  
#define   mset(a,b) memset(a, b, sizeof(a))
#define   FAST      ios_base::sync_with_stdio(false);cin.tie(NULL)
         

const int lim = 1e3 + 5 ;
const int inf = 1e9 ;

int n, m ;

vector<pii > adj[lim] ;
int dis[lim], par[lim] ;
bool vis[lim] ;


void dijkstra(int src){
    for(int i = 0; i <= n; i++){
        dis[i] = inf ;
        vis[i] = 0 ;
        par[i] = -1 ;
    }

    priority_queue< pii, vector<pii >, greater<pii > > pq ;

    dis[src] = 0 ;
    pq.push({dis[src], src}) ;

    while(!pq.empty()){
        int u = pq.top().second, d = pq.top().first ;
        pq.pop() ;

        if(vis[u]) continue ;
        vis[u] = 1 ;

        for(pii nd: adj[u]){
            int v = nd.first, w = nd.second ;

            if(dis[u]+w < dis[v]){
                dis[v] = dis[u] + w ;
                par[v] = u ;
                pq.push({dis[v], v}) ;
            }
        }
    }
}

void path_print(int u){
    if(par[u] == -1){
        cout<< u << " " ;
        return ;
    }
    path_print(par[u]) ;
    cout<< u << " " ;
}


int main(){
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

    int src = 1 ;

    dijkstra(src) ;

    path_print(7) ;
    cout<< endl ;

    vector<int> ans ;
    for(int u = 7; u != -1; u = par[u]){
        ans.push_back(u) ;
    }

    reverse(ans.begin(), ans.end()) ;

    for(int el: ans) cout<< el << " " ;

    return 0 ;
}


