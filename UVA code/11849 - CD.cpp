#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 long n,m;
    while(cin>>n>>m)
    {
        long i,a,cnt=0;
        map<long,long>mp;
        if(n==0&&m==0)
            break;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            mp[a]++;
        }
        for(i=1;i<=m;i++)
        {
            cin>>a;
            if(mp[a]==1)
                cnt++;
        }
        cout<<cnt<<endl;
    }
return 0;
}