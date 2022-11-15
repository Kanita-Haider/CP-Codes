#include <sstream>
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
int t,n;
string str; char ch;
//cin>>t;
while(getline(cin,str)){
   stringstream stream(str);
   int i;
   ll sum=0,ans=0;
   while(stream>>i){
     
      sum+=i;
      ans=max(ans,sum);
      if(sum<0) sum=0;
   }
   cout<<ans<<"\n";
}
return 0;
}