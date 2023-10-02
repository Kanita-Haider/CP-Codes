#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define nl "\n"
#define pii pair<ll, ll>
#define pll pair<ll, ll>
#define pi acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

// freopen("E:/vs code/input.txt", "r", stdin);
// freopen("E:/vs code/output.txt", "w", stdout);
// cout << fixed << setprecision(3) <<nl;

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
vector<ll>v ;
cin>>x;
v.push_back(x);

pair<ll, ll>p ;
vector<pair<ll,ll>>v;
v.pb(mp(a,b));

vector< pair<ll,ll>>v(n);
 for(ll i=0; i<n;i++){
     cin>>v[i].first>>v[i].second; }

set<ll, greater<ll> > s1;  set<ll>st ;
st.insert( x ) ;
set<ll> :: iterator itr;
for (itr = st.begin(); itr != st.end(); itr++)
        cout << *itr << " ";

map<ll, ll>mp ;
map<char, ll> :: iterator it ;
for(it = mp.begin() ; it!=mp.end(); it++)
        cout<<(*it).second<<nl ;
*/

bool compare(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.second < p2.second;
}

int main()
{
    FAST;
    ll t = 0;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vector<pair<ll, ll>> p;
        while (n--)
        {
            ll m;
            cin >> m;
            ll arr[m + 5];
            for (ll i = 0; i < m; i++)
                cin >> arr[i];
            sort(arr, arr + m);
            p.pb(mp(arr[0], arr[1]));
        }

        sort(p.begin(), p.end());

        ans += p[0].ff;

        sort(p.begin(), p.end(), compare);
        for (ll i = 1; i < p.size(); i++)
        {

            ans += p[i].ss;
        }

        cout << ans << nl;
    }
    return 0;
}
