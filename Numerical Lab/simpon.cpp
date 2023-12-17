#include<bits/stdc++.h>
using namespace std;

float y(float x){
return 1/x;
}

int main()
{
float n, a,b,h,s=0,s1=0,s2=0;
cin>>a>>b>>n;
float temp[100];
h=(b-a)/n;
cout<<"h  "<<h<<endl;

for(int i=0;i<=n;i++){
temp[i]=y(a+i*h);
}

for(int i=0;i<=n;i++){
    if(i==0 || i==n)  s+=temp[i];
    
    else if(i%2==0) s+=temp[i]*2;
    
    else s+=temp[i]*4;
}

 s=(h/3)*s;
cout<<"Value of integral is "<< s<<endl;
return 0;
}