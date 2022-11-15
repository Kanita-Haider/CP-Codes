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
int t,a,b,c;
cin>>t;
while(t--){
            cin>>a>>b>>c;
            if(a+b>c && b+c>a && c+a>b)
                cout<<"OK"<<endl;
            else
               cout<<"Wrong!!"<<endl;
        }
return 0;
}