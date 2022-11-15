#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
ll t,x,temp,sum,res;
cin>>t;
 for(int i=1; i<=t;i++){
     cin>>x;
     temp=1,sum=1,res=0;
    for(int j=1; j<=x;j++){
     res=sum+temp;
     temp=sum;
     sum=res;
     }
    cout<<"Scenario #"<<i<<":"<<"\n"<<res<<"\n\n";
    // }
}
return 0;
}