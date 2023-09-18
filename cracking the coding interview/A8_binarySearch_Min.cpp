//time complexity O(logn)
//space complexity O(1)

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


int minimum (vector<int>& v, int n ){

    int start=0, end=n-1, mid;

        while(start<=end){
             mid= start+(end-start)/2;
    
             if(v[mid]>v[end]) {

                    start=mid+1;
             }

             else end=mid-1;
        }
   return v[start];
    
}


int main()
{
 FAST;

int n,ans=0,x;
cin>>n;
vector<int>v(n);
for (auto &it : v ) cin >> it ;
//sort(v.begin(),v.end());


ans=minimum(v,n);

cout<<ans<<nl;

return 0;
} 

