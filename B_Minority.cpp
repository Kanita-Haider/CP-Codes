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
string s;
int zero=0,one=0,ans=0,res=0;
cin>>s;
 for(int i=0; i<s.size();i++){
     if(s[i]=='0') zero++;
     else one++;
     ans=min(zero,one);
   
}
if(zero==one) cout<<ans-1<<"\n";
else cout<<ans<<"\n";
}
return 0;
}