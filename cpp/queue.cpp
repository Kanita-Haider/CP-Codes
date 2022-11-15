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
int n,t,j=1;
while(cin>>t){
    if (t==0) break;
    //cout<<"Case "<<j<<":\n";
    list<int>q;
    
     for(int i=1; i<=t;i++){
         q.pb(i);
    }
   cout<<"Discarded cards:"; 
     char c; int x;
     while(q.size()>1){
       
            cout<<" "<<q.front();
            //q.pb(q.front());
            q.pop_front();
            int x= q.front();
            q.pop_front();   
             if (!q.empty())
		              cout<<",";
		q.pb(x);
        
    }
    cout<<""<<"\n";
    cout<<"Remaining card: "<<q.front()<<"\n";
    
}
return 0;
}