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
double a,b,c,s,area;
while(cin>>a>>b>>c){

    if(a==0 || b==0 || c==0)
    cout<<"The radius of the round table is: 0.000\n";
    else
        {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<fixed<<setprecision(3)<<"The radius of the round table is: "<<area/s<<"\n";
        }
}

return 0;
}