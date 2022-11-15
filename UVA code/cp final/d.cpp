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
int t,n,m,x;
cin>>t;
while(t--){
   cin>>n;

int arr[n+5],sum=0;;
 for(int i=1; i<=n;i++){
cin>>m;

sum+=m;
arr[i]=sum;

}
cin>>x;

if(x==1 || x==n)
    cout<<arr[n]<<"\n";
else{
    if(arr[n]-arr[x-1]>arr[x])
        cout<<arr[n]-arr[x-1]<<"\n";
    else
     cout<<arr[x]<<"\n";
}

}
return 0;
}