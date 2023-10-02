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




int main()
{
 FAST;
int t=0;
cin>>t;
vector<string>v={ "blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black" };

while(t--){
int n,ans=0,cnt=0, flag=0;
string s; cin>>s;
map<char,int>mp;

for(int i=0;i<s.size();i++){
        mp[s[i]]++;
}

// map<char, int> :: iterator it ;
// for(it = mp.begin() ; it!=mp.end(); it++){
//         cout<<(*it).ff<<" "<<(*it).second<<nl ;
// }

//cin>>n;

for(int i=0; i<v.size(); i++){
   // cout<<v[i]<<nl;

    for(int j=0;j<v[i].size();j++){
       //cout<<v[i]<<" "<<v[i][j]<<" * "<<mp[v[i][j]]<<nl ;
        if((mp[v[i][j]])>0){
        flag=1;
        continue;
        }
        else{
        flag=0 ; break;
    }
    }
    if(flag==1){
       // cout<<v[i]<<nl;
        for(int j=0;j<v[i].size();j++){
            mp[v[i][j]]--;
        }

        cnt++;
    }
    flag=0;

}

cout<<cnt<<nl;
    mp.clear();
}
return 0;
} 

