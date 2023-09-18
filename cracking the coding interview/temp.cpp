#include<bits/stdc++.h>
#define   ull        long long
#define   uull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <ull, ull>
#define   pull       pair <ull , ull > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
//#define FAST ios_base::sync_with_stdio(false);cin.tie(NUll)

using namespace std;


int binarySearch( ull n){

    ull start=1, end=n, mid,res,res2;

        while(start<=end){
             mid= start+(end-start)/2;
            res=((mid*(mid+1))/2);
                    //    cout<<res<<endl;
             if(res>=n){
                res2=mid;
                end=mid-1;
             }
             else start=mid+1;
        }
   return res2;
    
}


int main()
{
 //FAST;

ull n,ans=0,q,x,l, r;
cin>>n;
//vector<ull>v(n);
//for (auto &it : v ) cin >> it ;

//sort(v.begin(),v.end());


    ans=binarySearch(n);
    cout<<ans<<nl;
   // else cout<<"A"<<nl;




return 0;
} 

