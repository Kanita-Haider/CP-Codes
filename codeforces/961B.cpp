#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
int t,k,a,b;
cin>>t>>k;

int arr1[t+5],arr2[t+5];

for(int i=1; i<=t;i++)  cin>>arr1[i];

for(int i=1; i<=t;i++)  cin>>arr2[i];

ll prefix[t+5],sum[t+5],max=0;
mset(prefix,0);
mset(sum,0);
//if(arr2[1]== 0)  
  //  prefix[1]=arr1[1];
//else          
 // prefix[1]=0;

for(int i=1; i<=t;i++){
    if(arr2[i]==0)
        prefix[i]=prefix[i-1]+arr1[i];
    else 
        prefix[i]=prefix[i-1];
   // cout<<prefix[i]<<"\n";
    }

for(int i=1; i<=t;i++){
    if(arr2[i]==1)
        sum[i]=sum[i-1]+arr1[i];
    else 
        sum[i]=sum[i-1];
    }

 for(int i=1; i<=t,k<=t;i++){
    if(prefix[k]-prefix[i-1]>max) {
        max=prefix[k]-prefix[i-1];
        //a=i;
        }
    k++;
}

cout<<sum[t]+max<<"\n";
return 0;
}