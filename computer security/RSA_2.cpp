#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(){

long long p,q,n,z,e,d,e1;
cin>>p>>q;
n=p*q;
z= (p-1)*(q-1); //z = phi(n), euler toitient function
// e have to be co prime with n and phi(n)
//co prime means gcd =1
for(int i=2;i<z;i++){
    e = gcd(z,i);
    e1 = gcd(n,i);
    if(e==1 && e1==1) {
        e=i;
        break;
    }
}

for(int i=1;;i++){
    // (d*e)%z=1
    if((i*e)%z==1 && i!=e) {
        d=i;
        break;
    }
}

cout<<n<<" "<<z<<" "<<e<<" "<<d<<endl;
// public key(e,n)
// private key(d,n)

long long pt,ct,dt; cin>>pt;
cout<<pt<<endl;

ct=pow(pt,e);
ct=ct%n;
cout<<ct<<endl;

dt=pow(ct,d);
dt=dt%n;
cout<<dt<<endl;

return 0;
}