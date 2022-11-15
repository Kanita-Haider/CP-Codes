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
int t,x,y;
string s, s2;
cin>>s;
if(s=="SAT")  cout<<1<<"\n";
else if(s=="SUN")  cout<<7<<"\n";
else if(s=="MON")  cout<<6<<"\n";
else if(s=="TUE")  cout<<5<<"\n";
else if(s=="WED")  cout<<4<<"\n";
else if(s=="THU")  cout<<3<<"\n";

else   cout<<2<<"\n";

return 0;
}