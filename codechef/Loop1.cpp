#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,k, ans=0;
cin>>n>>k;
set<long long >v;

for(int i=0;i<n;i++) {
    int x;
    cin >>x ;
    v.insert(x);
}

for (auto itr = v.begin(); itr != v.end(); itr++)  {  
    if(*itr<k) ans++;
    else break;
    }

ans=k-1-ans;
cout<<ans<<endl;
return 0;
} 

