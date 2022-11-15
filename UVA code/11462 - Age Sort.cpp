#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
vector<int> v; 
int t ,x,flag=0;

while(cin>>t && t!=0){

while(t--){
    cin>>x;
    v.push_back(x);
}
sort(v.begin(), v.end());
flag=v.size();
for (auto x : v){
    
        cout<< x ;
 if(flag>1)     
    cout<<" ";
flag--;
        }

cout<<"\n";
v.clear();
}
return 0;
}