/* ---------------- wrong---------
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
   string s; int t,count,l,arr[100];

   cin>>t;
    for(int i=1; i<=t;i++){
      cin>>s;
      mset(arr,0);
      count=100;
      l=s.size();
     
       for(int i=0; i<l;i++){
         arr[s[i]-'a']++;
      }
     
      for(int i=0; i<100;i++){
         if(arr[i]>0 && arr[i]<count ) count=arr[i];
      }

      if((l/count)*count==l)
      cout<<l/count<<"\n"<<"\n";
      else cout<<l<<"\n"<<"\n";
   }
     
return 0;
}
*/
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
int t,flag=0;
string s;
cin>>t;
while(t--){
if(flag==1) cout<<"\n";
    flag=1;
    cin>>s;
 for(int i=1; i<=s.size();i++){
     if(s.size()%i==0){
         set<string>str;
          for(int j=0; j<s.size();j=j+i){
              string sub=s.substr(j,i);
              cout<<j<<" "<<i<<"\n";
              cout<<sub<<"\n";
             str.insert(sub);
         }
         cout<<""<<"\n";
         if(str.size()==1)
            { cout<<i<<"\n";
             break;
            }
     }

}

}
return 0;
}