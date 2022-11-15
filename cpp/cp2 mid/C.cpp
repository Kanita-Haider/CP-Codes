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
    int sum=0;
string s,a,b;
cin>>a;
cin>>b;
cin>>s;
 for(int i=1; i<s.size()-1;i++){
        size_t found = a.find(s[i-1]);
        if (found != string::npos) flag=1;
        if(flag==1){
            size_t found = a.find(s[i+1]);
        if (found != string::npos) { flag=2;
            sum++;
         }
         else break;
        }
        else {
           size_t found = a.find(s[i-1]);
        if (found != string::npos) flag=3; 
            

        }
     
     
      
     }


}
cout<<sum<<"\n";
}
return 0;
}