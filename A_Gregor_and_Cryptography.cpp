#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int mod(ll p,int x,int m){
    //cout<<x<<"\n";
     for(int i=x+1; i<=p;i++){
        // cout<<i<<"\n";
         if(p%i==m) 
        {   
             return i;}
        else continue;
    
    }
    return 0;
}

int main()
{
 FAST;
int t;
cin>>t;
ll p,a,b;
while(t--){
  cin>>p;
   for(int i=2; i<=p;i++){
       if(p%i!=0){
           if(p/i==i){
               int m=p%i;
               int b=mod(p,i,m);
               if(b>0)
                {
               cout<<i<<" "<<b<<"\n";
               break;
                }
                else continue;
           }
           else{
           cout<<i<<" "<<p/i<<"\n";
           break;
           }
       }
       else continue;
  
  }

}
return 0;
}