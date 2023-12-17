#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
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
 FAST;

string s,s1,s2;
cin>>s;

vector<pair<char,char>> v;
cout<<s<<nl;
 for(int i=0; i<s.size(); i++){
    if(i%2!=0) continue;
        v.pb(mp(s[i],s[i+1]));
        
    
 }


  sort(v.begin(), v.end());

while (next_permutation(v.begin(), v.end())){
        s1.clear();s2.clear();
        for (const auto& p : v) {
            
            s1+=p.first;
            s2+=p.second;
        }
        cout <<s1<<s2<< endl;
}




return 0;
} 

