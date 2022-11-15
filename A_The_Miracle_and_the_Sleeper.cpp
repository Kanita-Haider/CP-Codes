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
cin>>t;
ll a,b,sum;
while(t--){
    sum=0;
cin>>a>>b;

  sum=b-(b/2);
  if(b%2==0){
    sum++;
}
  //sum++;
 // cout<<sum <<" " << b/2<<" ";
  if(sum>a) cout<<b-sum<<"\n";
  else cout<<b-a<<"\n";

}
return 0;
}