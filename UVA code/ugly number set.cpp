#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int ugly(int n){
set<ll>s;
s.insert(1);
n--;
while(n--){
        auto it=s.begin();
        ll x= *it;
        s.erase(it);
        s.insert(x * 2);
	s.insert(x * 3);
	s.insert(x * 5);
}
return *s.begin();
}

int main()
{
 FAST;
int t=1500;
cout<<"The 1500'th ugly number is "<<ugly(t)<<"."<<"\n";
return 0;
}