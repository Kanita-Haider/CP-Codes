#include<bits/stdc++.h>
using namespace std;

float y(float x)
{
return 1/(1+x);
}

int main()
{
float n, a,b,h,s=0,s1=0,s2=0,temp;
cin>>a>>b>>n;
h=(b-a)/n;
cout<<"h  "<<h<<endl;
s1=y(a)+y(b);

for(int i=1;i<=n-1;i++){
temp=y(a+i*h);
s2=s2+temp;
}
s2=2*s2;
s=s1+s2;
s=(h/2)*s;
cout<<"Value of integral is "<<s<<endl;
return 0;
}