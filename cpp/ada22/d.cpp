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
//cout << fixed << setprecision(3) <<nl;
using namespace std;


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
int t;
cin>>t;
while(t--){
int n;
cin>>n;
//vector<int>v(n+5);
int arr[n+6];
 for(int i=1; i<=n;i++){
    int a,b;
    cin>>a>>b;
    arr[i]=a-b;


}

sort(arr+1,arr+n+1);
int cnt=0,sum=0;
 for(int i=n; i>0;i--){
    
    //cout<<arr[i]<<" ";
    sum+=arr[i];
    cnt++;
    if(sum>=30){
        break;
    }
   

}
if(sum<30) cout<<-1<<"\n";
else
cout<<cnt<<"\n";
}
return 0;
}