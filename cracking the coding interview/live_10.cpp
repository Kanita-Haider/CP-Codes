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

//time complexity O(nlogn)
//space complexity O(1)


bool compare(vector<int>& b1, vector<int>& b2) {
    return b1[1] > b2[1];
}

int cnt_maxUnit(vector<vector<int>>& boxTypes, int truck_size){

    sort(boxTypes.begin(), boxTypes.end(), compare);
    int max_unit = 0;

    for(auto i: boxTypes){
       // cout<<i[0]<<" "<<i[1]<<nl;
       if(truck_size==0) break;

        if(truck_size>=i[0]){
            max_unit=max_unit+i[0]*i[1];
            truck_size=truck_size-i[0];
        }

        else {
            max_unit=max_unit+truck_size*i[1];
            break;
        }
    }
    return max_unit;
}


int main()
{
 FAST;
int n,truckSize,m=2;
cin>>n>>truckSize;
    vector<vector<int>> v( n,vector<int> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
         
        }
    }

    cout << cnt_maxUnit(v,truckSize) << nl;


return 0;
} 

