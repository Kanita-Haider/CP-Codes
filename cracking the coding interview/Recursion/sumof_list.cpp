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


int printList(vector<int>list,int n){

    if(n==0) return 0;

   // printList(list, n-1);
    return list[n-1]+printList(list, n-1);
       //  cout<<list[n-1]<<nl;


}


int main()
{
 FAST;

int n,ans=0;
cin>>n;
vector<int>v(n);
for (auto i =0; i<n;i++)
        cin >> v[i];
     
cout<<printList(v,n);

//printList(v,n);

return 0;
} 

