#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int s[n],f[n];
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>f[i];
    }
    //sort(f,f+n);
    cout<<"Following selected activities are : \t"<<endl;
    i=1;
    cout<<i<<" ";
    for(j=2;j<=n;j++)
    {
        if(s[j]>=f[i]){
            cout<<j<<" ";
            i=j;
        }
    }
    cout<<endl;
}

