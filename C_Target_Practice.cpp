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
int n,ans=0;
char arr[11][11];

for(int i=1;i<=10;i++){
    for(int j=1;j<=10;j++){
        cin>>arr[i][j];
        if(arr[i][j]=='X'){
            if((( i==1 || i==10) && 1<=j<=10) || ( (j==1 || j==10) && 1<=i<=10)) {
                //cout<<i<<" "<<j<<" "<<1<<nl;
                ans+=1;
                }

            else if(( (i==2 || i==9 )&& 1<j<10) || ( (j==2 || j==9) && 1<i<10)) 
            {
              //  cout<<i<<" "<<j<<" "<<2<<nl;
                ans+=2;
                }
            else if(( (i==3 || i==8) && 2<j<9) || ( (j==3 || j==8) && 2<i<9)) {
               // cout<<i<<" "<<j<<" "<<3<<nl;
                ans+=3;
                }
            else if((j==5 &&( i==5||i==6))|| (j==6 && (i==5||i==6))) {
               // cout<<i<<" "<<j<<" "<<5<<nl;
                ans+=5;
                }
            else {
               // cout<<i<<" "<<j<<" "<<4<<nl;
                ans+=4;
                }
            
        }
    
}

}

cout<<ans<<nl;
}
return 0;
} 

