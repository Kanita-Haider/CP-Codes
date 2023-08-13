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

//freopen("E:/vs code/input.txt", "r", stdin);
//freopen("E:/vs code/output.txt", "w", stdout);
//cout << fixed << setprecision(3) <<nl;

/*ll md=LLONG_MAX;
ll power(ll val,ll pw)
{
    if(pw==0)return 1;
    if(pw%2==0)
    {
        ll tmp=power(val,pw/2)%md;
        return (tmp*tmp)%md;
    }
    else return (val*power(val,pw-1))%md;
}
*/

/* STL SYNTAX
vector<int>v ;
cin>>x;
v.push_back(x);

pair<int, int>p ;
vector<pair<int,int>>v;
v.pb(mp(a,b));

vector< pair<int,int>>v(n);
 for(int i=0; i<n;i++){
     cin>>v[i].first>>v[i].second; }

set<int, greater<int> > s1;  set<int>st ;
st.insert( x ) ;
set<int> :: iterator itr;
for (itr = st.begin(); itr != st.end(); itr++) 
        cout << *itr << " ";
    
map<int, int>mp ;
map<char, int> :: iterator it ;
for(it = mp.begin() ; it!=mp.end(); it++)
        cout<<(*it).second<<nl ;
*/


int main()
{
 FAST;

int n,ans=0;
cin>>n;
vector<int>v(n);
vector<int,int>vp(n);

v[0]=vp[0].first;

for(int i=0;i<n;i++){
    cin>>vp[i].first>>vp[i].second;
}

for(int i=;i<n;i++){
    if(v[i].second>=v[i+1].first){
        v.pb(vp[i+1].second);
    }
    else{
        v.pb(vp[i+1].first);
    }
}



cout<<ans<<nl;

return 0;
} 

