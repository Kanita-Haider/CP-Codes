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
int n;
cin>>n;
int arr[n+5];
 for(int i=0; i<n;i++){
        cin>>arr[i];
}
 for(int i=0; i<n;i++){
         for(int j=i; j>0 && arr[j-1] > arr[j] ;j--){
               swap(arr[j],arr[j-1]);
        }
}
cout<<"sorted list  ";
 for(int i=0; i<n;i++){
       cout<<arr[i]<<" ";
}
    
return 0;
}