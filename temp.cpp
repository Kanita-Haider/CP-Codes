#include <bits/stdc++.h>
using namespace std;
     
int main() {
     
     int n;
     cin>>n;
     vector<pair<int,int>> v(n+5);
        for(int i=0; i<n;i++){
     cin>>v[i].first>>v[i].second;
      }

     sort(v.begin(),v.end());
    for(int i=0; i<n-1;i++){
        if(v[i].second>=v[i+1].first) {
            if(v[i].second<=v[i+1].second){
                v[i].second=v[i+1].second;
                v.erase(v.begin()+i+1);
            }
            else{
                v.erase(v.begin()+i+1);
            }
        }
    }
    for(int i=0; i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }


    return 0;
}