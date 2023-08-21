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


int maxx(vector<int>list,int n){

    if(n==0) return 0;

    return max(list[n-1],maxx(list, n-1));
    


}


int minn(vector<int>list,int n){

    if(n==0) return list[0];

    
    return min(list[n-1],minn(list, n-1));



}


int main()
{

 FAST;

int n,ans=0;
cin>>n;
vector<int>v(n);
for (auto i =0; i<n;i++)
        cin >> v[i];
     
cout<<maxx(v,n)<<nl;
cout<<minn(v,n);

//printList(v,n);

return 0;
} 

