#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 double n,p,k;
while(cin>>n>>p){
k=pow(p,1.0/n);
cout<< setprecision(0) << fixed<<k<<"\n";
}
return 0;
}