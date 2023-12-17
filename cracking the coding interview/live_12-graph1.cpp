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

    for(auto i: adj[node]){

       if(!visited[i])
        dfs(adj, i,visited);
    }

}




int main()
{

int n,m;
cin>>n>>m;
vector<vector<int>>adj(n+5);
int u, v;

for(int i=0;i<m;i++){

    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
}

int src, dest;
cin>>src>>dest;

bool visited[n+5];
memset(visited, false, sizeof(visited));

dfs(adj, src ,visited);

if(visited[dest]) cout<<"true"<<nl;
else  cout<<"false"<<nl;

return 0;
} 

