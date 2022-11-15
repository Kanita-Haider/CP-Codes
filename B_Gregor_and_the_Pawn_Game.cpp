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
int t;
cin>>t;
while(t--){
int n,flag=0;
string s,ss;
cin>>n;
cin>>s; 
cin>>ss;
 for(int i=0; i<n;i++){
     
     if(ss[i]=='1'){
       if(s[i]=='0') flag++;
       else if(i==0){
           if(s[i+1]=='1') {
               flag++;
               s[i+1]='2';
               }
       }
       else if(i==n-1){
            if(s[i-1]=='1') {
               flag++;
               s[i-1]='2';
               }
       }
       else{
           if(s[i-1]=='1') {
               flag++;
               s[i-1]='2';
               }
            else if(s[i+1]=='1') {
               flag++;
               s[i+1]='2';
               }
       }
     }

      else continue;

}
    cout<<flag<<"\n";

}
return 0;
}