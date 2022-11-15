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
int t,flag=0,cnt=0;
//cin>>t;
string s1,s2;
cin>>s1>>s2;
 for(int i=0; i<2;i++){

        if(s1[i]=='#'){
            if (s2[i]=='#'){
                 flag++;
                continue;
            }
             else if (s1[i-1]=='#'){
                 flag++;
                continue;
            }
             else if (s1[i+1]=='#'){
                 flag++;
                
            }
            if(flag==0) {
                cnt=-1;
            }
        

}
 }
for(int i=0; i<2;i++){

        if(s2[i]=='#'){
            if (s1[i]=='#'){
                 flag++;
                continue;
            }
             else if (s2[i-1]=='#'){
                 flag++;
                continue;
            }
             else if (s2[i+1]=='#'){
                 flag++;
                
            }
            if(flag==0) {
                cnt=-1;
            }
        

}

}
if(flag>0 && cnt==0)
cout<<"Yes"<<"\n";
else cout<<"No"<<"\n";
//cout<<s1<<"\n"<<s2<<"\n";
return 0;
}