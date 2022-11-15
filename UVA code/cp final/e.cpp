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
string g,b,s;
while(t--){
    cin>>g;
    cin>>b;
    cin>>s;
int flag=0;
 for(int i=1; i<s.size();i++){
    size_t found = g.find(s[i]); 
    if (found != string::npos){
        size_t s1=b.find(s[i-1]);
        size_t s2=b.find(s[i+1]);
        if(s1 != string::npos && s2 != string::npos)
            flag++;
        else
        continue;
    }
    else{
        size_t s3=g.find(s[i-1]);
        size_t s4=g.find(s[i+1]);
        if(s3 != string::npos && s4 != string::npos)
            flag++;
          else
        continue;
    }
}
cout<<flag<<"\n";
}
return 0;
}