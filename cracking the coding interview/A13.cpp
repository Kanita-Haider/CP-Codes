#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;


//time complexity O(V+E)
//space complexity O(V+E)
const int lim=1e5+5;

vector<int>adj[lim];
int arr[lim];
int validpath=0;
unordered_map<int,int>mp;

void dfs(int u, int parent, int c){
    
    int good_cnt=arr[u];

    for(int i : adj[u]){
         if(i == parent) continue;
            dfs(i, parent, c);
              //cout<<v<<endl;
            good_cnt+=mp[i];

    }
    if(good_cnt<=c) validpath++;
    mp[u]=good_cnt;

    //cout<<u<<endl;
}

int main()
{
 FAST;
int n,m,c;
cin>>n>>m;

for(int i=1;i<=n;i++) cin>>arr[i];

for(int i=0; i<m;i++){
    int u,v,w;
    cin>>u>>v;
   // cin>>u>>v>>w;
    adj[u].pb(v);
    adj[v].pb(u);
   //adj[u].pb({v,w});
   //adj[v].pb({u,w});
}

cin>>c;

//cout<<c<<endl;

memset(vis,0,sizeof(vis));
dfs(1, 0, c);
//  for(int i=1; i<=n;i++){
//      cout<<i<<"-> ";
//       for(int j=0; j<adj[i].size();j++){
//             cout<<adj[i][j]<<" ";
//      }
//  cout<<"\n";
// }

cout<<validpath<<endl;

return 0;
}