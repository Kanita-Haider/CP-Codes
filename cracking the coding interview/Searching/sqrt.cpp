#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;


ull binarySearch(ull  n){

    ull  start=1, end=10e9, mid;
//cout<<sqrt(n)<<nl;
        while(start<=end){
             mid= start+(end-start)/2;
    
             if(mid*mid == n) return mid;

             else if(mid*mid < n) start=mid+1;

             else end=mid-1;
        }
   return -1;
    
}


int main()
{
 FAST;

ull n,ans=0,x;
cin>>n;


ans=binarySearch(n);
if(ans==-1)
cout<<"NO"<<nl;
else cout<<"YES"<<nl;

return 0;
} 

