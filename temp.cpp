#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1)
#define ms(a,b) memset(a, b, sizeof a)
#define sp setprecision
#define fasterInOut ios::sync_with_stdio(false); cin.tie(0);
#define debug(x) cout<<@<<" = "<<x<<endl;
#define MAX 100005


int main(){
    int t; cin>>t;
    while(t--){
        vector<pair<ll, ll>>vp;
        ll n,x,p,ans; cin>>n>>x>>p;
        ll arr[p+1];
        for(ll i=0;i<p;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        while(n--){
            ll v,d; cin>>v>>d;
            ll tot_incon = x/d;
            for(ll i=0;i<p;i++){
                if((arr[i]%d)==0) tot_incon--;
            }
            vp.push_back(make_pair(tot_incon, v));
            sort(vp.begin(), vp.end());
            ans=vp[0].second;
            for(ll i=0;i<vp.size()-1;i++){
                if(vp[i].first==vp[i+1].first){
                    if(vp[i].second>=vp[i+1].second)
                        ans=vp[i].second;
                    else
                        ans=vp[i+1].second;
                }
                else break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
