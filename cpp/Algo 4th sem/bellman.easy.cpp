#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9 ;


int main(){
 int n, m ;
 cin>> n >> m ;
vector<vector<int>> adj ;
 
  for(int i = 0; i < m; i++){
        int u, v, w ;
        cin>> u >> v >> w ;
        adj.push_back({u,v, w}) ;
    }
    int src = 0;
    int dist[n+5];
   for(int i = 0; i < n; i++)  dist[i] = inf ;

   //for(auto j: adj){
       for(int i=0;i<adj.size();i++){
            int u= adj[i][0];
            int v= adj[i][1];
            int w= adj[i][2];
           //cout<<u<<" "<<v<<" "<<w<<endl;
   } 
/*
 for(auto j: adj){
            int u= j[0];
            int v= j[1];
            int w= j[2];
            cout<<u<<" "<<v<<" "<<w<<endl;
 }
 */
 bool flag;
    dist[src]=0;
    for(int i = 0; i <n-1; i++){
        flag=false;
        for(auto j: adj){
            int u= j[0];
            int v= j[1];
            int w= j[2];
            if(dist[v]>w+dist[u]) flag=true;
            dist[v]=min(dist[v], w+dist[u]);
            //cout<<u<<" "<<v<<" "<<w<<" ->"<<dist[u]+w <<" "<<dist[v]<<endl;
        }
         for(int i=0; i<n;i++){
  //  cout <<dist[i]  << " " ;
    
    }
          cout<<endl;
    }
    
    if (flag==true) { cout<<" neg" <<endl;}
     for(int i=0; i<n;i++){
    cout<< i << " -> " <<dist[i]  << endl ;
    
    }
         
    return 0;
}