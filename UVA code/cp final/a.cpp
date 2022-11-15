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
    int cr,crfee,exfee,sum=0;
    cin>>cr;
    crfee=cr*2100;
    exfee=cr*100;
    crfee=crfee*0.8;
    sum=14000+exfee+4000+crfee;
    cout<<sum<<"\n";
}
return 0;
}