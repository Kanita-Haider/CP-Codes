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
int n,cnt=0;
cin>>n;
string s;
cin>>s;
 for(int i=0; i<s.size();i++){
     if(s[i]=='0' && s[i+1]=='0'){
         cnt+=2;
     }
     else if(s[i]=='0' && s[i+1]=='1' &&   s[i+2]=='0'){
         cnt++;
     }

}
cout<<cnt<<"\n";
}
return 0;
}