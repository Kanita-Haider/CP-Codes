#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
int t;

while(cin>>t){
    if (t==0) break;
    else{
        int arr[t+5],sum=0,ans=-1e9;
         for(int i=1; i<=t;i++){
        cin>>arr[i];
        sum+=arr[i];
        ans=max(sum,ans);
        if(sum<0) sum=0;
        
        }
    //cout<<ans<<"\n";
    if(ans>0) cout<<"The maximum winning streak is "<<ans<<"."<<"\n";
    else cout<<"Losing streak."<<"\n";
    }

}
return 0;
}