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
cin>>s;
char c;
cin>>c;
int r, f=0;
 for(int i=0; i<s.size();i++){
     if(s[i]==c){
         if(i%2==0) f++;
         r=s.size()-1-i;
         if(r%2==0) f++;
     }
     if(f==2){
         break;
     }
     else{
         f=0;
         continue;
     }
}
if(f==2)
cout<<"YES"<<"\n";
else 
cout<<"NO"<<"\n";
}
return 0;
}