#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void prefixsum(int arr[],int n,int prefix[]){
    prefix[0]=arr[0];
     for(int i=1; i<n;i++){
         prefix[i]=prefix[i-1]+arr[i];
    }
}

int main()
{
 FAST;
int t,a,b,q;
cin>>t;
int arr[t+5],prefix[t+5];
 for(int i=0; i<t;i++){
    cin>>arr[i];
}
prefixsum(arr,t,prefix);
cin>>q;
while (q--)
{
    cin>>a>>b;
    if(a==0)
    cout<<prefix[b]<<"\n";
    else
    cout<<prefix[b]-prefix[a-1]<<"\n";

}



return 0;
}