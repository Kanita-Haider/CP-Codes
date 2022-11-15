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
int t,n;

cin>>t;
int arr[t+5];
 for(int i=1; i<=t;i++){
     cin>>arr[i];
 }
 sort(arr+1,arr+n+1);
 cin>>n;
 
 while(n--){
     int sum=0;
     int x;
     cin>>x;
      for(int i=1; i<=t;i++){
     if(x>=arr[i]) sum++;
     else break;
     }
     cout<<sum<<"\n";
 }
 
return 0;
}