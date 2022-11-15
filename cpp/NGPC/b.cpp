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
int t,n,k;
string s;
cin>>t;
while(t--){
    int f=0;
cin>>n;
cin>>s;
cin>>k;
if(s[k]=='<'){
     for(int i=k-1; i>=0;i--){
         if(s[i]=='>'){
             f=1;
             break;
         }
    
    }
}

else if(s[k]=='>' ){
    f=0;
     for(int i=k; i<s.size();i++){
            if(s[i]=='<'){
                f=1;
                break;
            }
       
    }
}
else {
    f=0;
     for(int i=k; i<s.size();i++){
            if(s[i]=='<'){
                f=1;
                break;
            }
        }
    if(f==1){
        f=0;
         for(int i=k; i>=0;i--){
         if(s[i]=='>'){
             f=1;
             break;
         }
    
    }
    }
    
}

if(f==0) cout<<"Yes"<<"\n";
else cout<<"No"<<"\n";

}
return 0;
}