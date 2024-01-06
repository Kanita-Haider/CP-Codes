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
int cnt=0;
int print(vector<int> &v, int arr[], int i, int n, int s, int sum){

 //cout<<"hello"<<nl;
    if (i==n){
      //  cout<<"hello"<<nl;
        if(s==sum){
           
        return 1 ;
      
        }
        else return 0;
       
    }
    
    v.pb(arr[i]);
    s+=arr[i];
  int l = print(v,arr, i+1, n, s, sum);

    s-=arr[i];
    v.pop_back();
  int r = print(v,arr, i+1, n, s, sum);
   return l+r ;
}

int main()
{
 FAST;
int n,s=0,sum=2,i;
cin>>n;
vector<int>v;
int arr[n+5];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<print(v,arr, 0, n,s, sum);


return 0;
} 

