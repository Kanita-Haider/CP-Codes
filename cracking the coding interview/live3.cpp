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



string shuffle(string s,vector<int>v){

    int n=s.size();
    string shuffled_s=s;
    for(int i=0;i<n;i++){
        shuffled_s[v[i]]=s[i];
    } 
    return shuffled_s;
}

//time and space complexity O(n)

int main()
{
 FAST;
string str,shuffled_str; cin>>str;
int n=str.size();
vector<int>v1(n);
for(int i=0;i<n;i++){
    cin>>v1[i];
}
cout<<shuffle(str,v1)<<nl;

return 0;
} 

