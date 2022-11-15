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
int t,n;
ll x1,x2,p1,p2;
cin>>t;
while(t--){
cin>>x1>>p1;
cin>>x2>>p2;
if(p1-p2>0)
 for(int i=1; i<=p1;i++){
     x1=x1*10;
}
 for(int i=1; i<=p2;i++){
     x2=x2*10;
}
if(x1>x2) cout<<">"<<"\n";
else if( x1<x2) cout<<"<"<<"\n";
else cout<<"="<<"\n";

}


return 0;
}