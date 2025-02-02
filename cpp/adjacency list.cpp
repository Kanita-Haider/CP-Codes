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




int main()
{
int n, m;
 cin>>n>>m;
  
  //vector<int>adj[m+5];
  vector<pair<int,int>>adj[m+5];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }

    for(int i=1;i<=n;i++){
        cout<<i<<" => ";
            for(auto& x: adj[i]){
                cout<<x.first<<"|"<<x.second<<" ";
                //cout<<x<<" ";
            }
            cout<<endl;
    }



return 0;
} 

