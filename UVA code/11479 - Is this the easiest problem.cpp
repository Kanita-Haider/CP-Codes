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
ll t,a,b,c;
cin>>t;

 for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if ( a<=0 || b<=0 || c<=0)
        cout<<"Case "<<i<<":"<<" Invalid"<<endl;

        else if(a+b>c && b+c>a && c+a>b)
        {
            if (a==b && b==c)
            cout<<"Case "<<i<<":"<<" Equilateral"<<endl;
            else if (a!=b && a!=c && b!=c)
            cout<<"Case "<<i<<":"<<" Scalene"<<endl;
            else
            cout<<"Case "<<i<<":"<<" Isosceles"<<endl;
        }
        else
        cout<<"Case "<<i<<":"<<" Invalid"<<endl;

    }

return 0;
}