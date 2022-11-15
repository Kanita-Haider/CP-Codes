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
int n,ans=0,res=0,res1=0,ans2=0,cnt=0,cnt2=0,r,r1,tmp,tmp1,n1;
cin>>n;
n1=n;
if(n%7==0) cout<<n<<"\n";
else{
    res1=n%7;
    ans=n-res1;
    tmp=ans;
    res=n/7;
    ans2=7*(res+1);
    tmp1=ans2;
    if(ans<10)
     cout<<ans2<<"\n";
    else{
        while(n!=0 && ans!=0){
            r=n%10;
            r1=ans%10;
            if(r!=r1) cnt++;
            n/=10;
             ans/=10;
        }

        while(n1!=0 && ans2!=0){
            r=n1%10;
            r1=ans2%10;
            if(r!=r1) cnt2++;
             n1/=10;
             ans2/=10;
        }
 if(cnt>cnt2)
     cout<<tmp1<<"\n";
    else 
    cout<<tmp<<"\n";
    }  
   
}

}
return 0;
}