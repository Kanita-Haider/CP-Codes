#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
int t;
cin>>t;
while(t--){
    int n, cnt=0;
    cin>>n;
    
vector<int>v(n);
 for(int i=0; i<n;i++){
        cin>>v[i];
}
 for(int i=1; i<n-1;i++){
      if(v[i]>v[i-1] && v[i]>v[i+1])  {
          cnt++;
          if(i+2<n)
          v[i+1]=max(v[i],v[i+2]);
          else 
           v[i]=max(v[i+1],v[i-1]);

      }
}
cout<<cnt<<"\n";
 for(int i=0; i<n;i++){
       cout<<v[i]<<" ";
    }
    cout<<"\n";
}
return 0;
}