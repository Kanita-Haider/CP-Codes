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
int t;
cin>>t;
ll n,a,flag,p=1,x;

while(t--){
    flag=0;
    cin>>n;
    x=n;
    
    for(ll i=0;n>0;i++)    
    {    
    a=n%2;  
    if(a==1){ 
        flag++;
        }
    n=n/2;
    }   
if(flag%2==0)
    cout<<"Case "<<p<<": "<<x<<" is an Evil number."<<"\n";
else
    cout<<"Case "<<p<<": "<<x<<" is an Odious number."<<"\n";
p++;
}
return 0;
}