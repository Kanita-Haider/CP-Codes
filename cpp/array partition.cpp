#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
vector<int>v;

int n,m,k,ans,cnt=0;
ll sum=0;
cin>>n>>m>>k;
vector<pair<ll,int>> p(n);
 for(int i=0; i<n;i++){
      cin>>p[i].f;
      p[i].s=i;
}

sort(p.begin(),p.end(),greater<pair<ll, int>>());



 for(int i=0; i<m*k;i++){
       sum+=p[i].f;
       v.pb(p[i].s);
}

cout<<sum<<"\n";
sort(v.begin(),v.end());

 for(int i=m-1; i<v.size();i+=m){
       if(cnt==k-1) break;
      cout<<v[i]+1<<" ";
      cnt++;
}
cout<<"\n";

return 0;
}