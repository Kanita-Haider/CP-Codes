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
int t,n;
string s,s1,s2;
cin>>t;
while(t--){
    int a=0,b=0,a1=0,b1=0;
cin>>n;
cin>>s;
 for(int i=0; i<n;i++){
     s1=s.substr(0,i);
     s2=s.substr(i);
    //cout<<s1<<" "<<s2<<"\n"; 
    a=count(s1.begin(), s1.end(),'a');
    b=count(s1.begin(), s1.end(),'b');
    if(a==b && a!=0 && b!=0){
        cout<<0<<" "<<i<<"\n";
        a1++;
        break;
    }
     a=count(s2.begin(), s2.end(),'a');
    b=count(s2.begin(), s2.end(),'b');
   if(a==b && a!=0 && b!=0){
        cout<<i+1<<" "<<n<<"\n";
        a1++;
        break;
   }
   else continue;
}
if(a1==0) 
cout<<-1<<" "<<-1<<"\n";


}
return 0;
}