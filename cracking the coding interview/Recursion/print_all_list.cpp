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


void printList(vector<int>list,int start,int end){

    if(start==end) return;

  //  cout<<list[start]<<nl;
printList(list,start+1, end);
cout<<list[start]<<nl;


}


int main()
{
 FAST;

int n,ans=0;
cin>>n;
vector<int>v(n);
for (auto i =0; i<n;i++)
        cin >> v[i];
     
printList(v,0,n);



return 0;
} 

