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
int n,m;
cin>>n>>m;
int a[n+5],b[m+5];
ll sum=0;
 for(int i=1; i<=n;i++){
        cin>>a[i]; 
}
for(int i=1; i<=m;i++){
        cin>>b[i];
}
sort(a+1,a+n+1);
sort(b+1,b+m+1);
if(a[1]>= b[m]) cout<<"0"<<"\n";
else{
     for(int i=m; i>0;i--){
         if(b[i]<=a[1]) break;
        sum+=b[i]-a[1];
    }

cout<<sum-1<<"\n";
}
return 0;
}