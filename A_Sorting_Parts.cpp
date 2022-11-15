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
while(t--){
    int n;
    cin>>n;
    int arr[n+5],flag=0;
     for(int i=1; i<=n;i++){
         cin>>arr[i];
         if(arr[i]<arr[i-1]){
             flag++;
             //break;
         }
    }
    if(flag==0 )
        cout<<"NO"<<"\n";   
    else cout<<"YES"<<"\n"; 

}
return 0;
}