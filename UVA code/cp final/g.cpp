#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pi 2*acos(0)
using namespace std;

int main()
{
 FAST;
double t,area,a;
while(cin>>t){
if(t<0) break;
area=pi*t*t;
a=sqrt((area*4)/sqrt(3));
cout << fixed << setprecision(4) << a<<"\n";
}
return 0;
}