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
while(cin>>n>>t){
    if (n==0 && t==0) break;
    cout<<"Case "<<j<<":\n";
    list<ll>q;
    int m=min(n,t);
     for(int i=1; i<=m;i++){
         q.pb(i);
    }
     char c; int x;
     for(int i=1; i<=t;i++){
         cin>>c;
        if(c=='N'){
            cout<<q.front()<<"\n";
             q.pb(q.front());
            q.pop_front();
        }
        else{
                cin>>x;
                q.remove(x);
                q.push_front(x);
        }
    }
    j++;
}
return 0;
}