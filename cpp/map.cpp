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
int t,n,p1,p2,x,sum=0,f=0;
char arr[30],b='a',c1,c2;
string s;
cin>>s;
map<char,int> m;
  for(int i=0; i<26;i++){
      cin>>x;
      m.insert(pair<char, int>(b, x));
      b++;
      //cout<<x<<" "<<b<<"\n";
 }
 for(int i=0; i<s.size;i++){

    if(s[i]=='?' ){
        if(f==0)
        { c1=s[i-1];
          p1=i;
          }
        if(isalpha(s[i+1])){
            p2=i;
            c2=s[i+1];
            f=0;
        }
        else{
            f=1;
            continue;
        }
    }
    else {
        sum+=m[s[i]];
    }

}
//cout<<m['c']<<"\n";
return 0;
}