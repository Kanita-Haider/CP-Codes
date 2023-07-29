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
int t=0;
cin>>t;
while(t--){
string n,ans;

char arr[5][5];
for (int i = 1; i <=3 ; i++)
{
    for (int j = 1; j <=3 ; j++)
    {
    cin>>arr[i][j];
    }
}



if(arr[1][1]==arr[1][2] && arr[1][2]==arr[1][3]) {
    ans=arr[1][1];
}

else if(arr[2][1]==arr[2][2] && arr[2][2]==arr[2][3]) {
    ans=arr[2][1];
}

else if(arr[3][1]==arr[3][2] && arr[3][2]==arr[3][3]) {
    ans=arr[3][1];
}


else if(arr[1][1]==arr[2][1] && arr[2][1]==arr[3][1]) {
    ans=arr[1][1];
}
else if(arr[1][2]==arr[2][2] && arr[2][2]==arr[3][2]) {
    
    ans=arr[1][2];
}
else if(arr[1][3]==arr[2][3] && arr[2][3]==arr[3][3]) {
   ans=arr[1][3];
}


else if(arr[1][1]==arr[2][2] && arr[2][2]==arr[3][3]) {
    ans=arr[1][1];

}

else if(arr[1][3]==arr[2][2] && arr[2][2]==arr[3][1]) {
    ans=arr[1][3];
}


else
ans="DRAW";
if (ans==".") ans="DRAW";
cout<<ans<<nl;
}
return 0;
} 

