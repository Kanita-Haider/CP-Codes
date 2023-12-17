#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;



//time complexity O(V+E)
//space complexity O(V+E)

void dfs(vector<vector<int>>& adj, int node, bool visited[]){

    visited[node]=true;

    //for(auto i : adj[node]){
        for(int i=0;i<adj[node].size();i++){
             int adjNode= adj[node][i];
            if(!visited[adjNode])
               dfs(adj,adjNode,visited);
    }

}

int countConnectedComponent(vector<vector<int>>& adj, int nodes){

int numberOfComponent=0;
bool visited[nodes+5];
memset(visited, false, sizeof(visited));

for(int i=1;i<=nodes;i++){
    if(visited[i]==false){
        numberOfComponent++;
        dfs(adj, i,visited);
    }
}

return numberOfComponent;
}


int main()
{
 FAST;
int n,ans=0,m;
cin>>n>>m;
vector<vector<int>>adj(n+5);
int u, v;

for(int i=0;i<m;i++){

    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}
ans= countConnectedComponent(adj, n);
cout<<ans<<nl;

return 0;
} 

