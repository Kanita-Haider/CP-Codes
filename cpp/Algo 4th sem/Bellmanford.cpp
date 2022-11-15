#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9 ;


int main(){
 int n, m ;
 cin>> n >> m ;
 bool flag;
vector<vector<int>> adj ;
 
  for(int i = 0; i < m; i++){
        int u, v, w ;
        cin>> u >> v >> w ;
        adj.push_back({u,v, w}) ;
    }
    int src = 0;
    int dist[n+5];
   for(int i = 0; i < n; i++)  dist[i] = inf ;

    dist[src]=0;
    for(int i = 0; i <n-1; i++){
		 flag=false;
        for(auto j: adj){
            int u= j[0],  v= j[1], w= j[2];
			
			if(dist[v]>w+dist[u]) 
					flag=true;
            dist[v]=min(dist[v], w+dist[u]);
        }
    }
	if (flag==true)  cout<<" Graph contains negative weight cycle " <<endl;
	else {
     for(int i=0; i<n;i++)
    	cout<< i << " -> " <<dist[i]  << endl ;
	}
         
    return 0;
}