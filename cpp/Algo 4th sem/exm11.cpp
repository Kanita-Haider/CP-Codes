#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,te,m;

    cin>>n>>m;           //n=item num, m=max weight
    double a[n+5],b[n+5],s[n+5],x[n+5],pro=0,u;
    for(i=0;i<n;i++)
    {
        cin>>a[i];  //value
        cin>>b[i]; //weight
    }
    for(i=0;i<n;i++)
    {
        s[i]=a[i]/b[i];   //density
       // cout<<s[i]<<" "<<endl;
    }
   
    sort(s,s+n);
    u=m;
    for(i=0;i<n;i++)
    {
        x[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>u)
            break;
        else
        {
            x[i]=1.0;
            pro=pro+a[i];
            u=u-b[i];
        }
    }
    if(i<n)
    {
        x[i]=u/b[i];
        pro=pro+a[i]*x[i];
        cout<<pro<<endl;
    }

}

