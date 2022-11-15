#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define pi acos(-1)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
int t;
double l,w,r, area1,area2; 
cin>>t;
while(t--){
    cin>>l;
        w=l*0.6;
        r=l*0.2;
        area1=(pi*r*r);
        area2=l*w;
        cout<<fixed<<setprecision(2)<<area1<<" "<<area2-area1<<"\n";
}
return 0;
}