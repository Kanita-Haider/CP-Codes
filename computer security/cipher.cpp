#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
//#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;



int main()
{

string str,s;  getline(cin,str);
transform(str.begin(), str.end(), str.begin(), ::tolower);
char a='a',b='a';

map<char, int>mp;
map<int,char>rmp;
for(int i=0;i<26;i++)  mp[a++]=i;
for(int i=0;i<26;i++)  rmp[i]=b++;
//for (auto& i : rmp)   cout << i.first << ": " << i.second << nl;

for(int k=1;k<26;k++){

    s=str;
    for(int i=0; i<s[i]!='\0'; i++){

        if(s[i]==' ') continue;
        int c = mp[s[i]];
        int p = (c-k)%26;

        if(p<0) p=26+p;
       // cout<<p<<" "<<s[i]<<" "<<c<<" "<<rmp[p]<<nl;
        s[i]=rmp[p];
        
    }
 //cout<<"Key "<<k<<"-> "<<s<<nl;
 cout<<s<<nl;
}
return 0;
} 

