#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
set<string>sset;
string str;

int n,m,k,ans,cnt=0;
while(cin>>str){
      //transform(s.begin(),s.end(),s.begin(),::tolower);
      //cout<<s<<"\n";
      string temp;
       for(int i=0; i<str.size();i++){
             if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
                   temp+=tolower(str[i]);
             }
             else if(temp!=""){
                    //cout<<"else "<<temp<<"\n";
                   sset.insert(temp);
                   temp.clear();
             }
      
      }
      if(temp!=""){
//cout<<temp<<"\n";
           sset.insert(temp);
                   temp.clear(); 
      }

}

for(auto i=sset.begin(); i!=sset.end();i++){
    //if(i)
      cout<<*i<<"\n";

}
//cout<<"\n";
return 0;
}