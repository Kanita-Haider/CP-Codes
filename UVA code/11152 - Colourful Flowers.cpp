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
double a,b,c,s,r,r2,area1,area2,area3;
while(cin>>a>>b>>c){
        s=(a+b+c)/2;
        area2=sqrt(s*(s-a)*(s-b)*(s-c));
        
        r=area2/s;
        area1=(pi*r*r);

         r2=(a*b*c)/(4*area2);
        area3=(pi*r2*r2);
    cout<<fixed<<setprecision(4)<<area3-area2<<" "<<area2-area1<<" "<<area1<<"\n";
}


return 0;
}