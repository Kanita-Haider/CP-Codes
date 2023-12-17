#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(){

int p,q,n,z,e,d;
cin>>p>>q;

n=p*q;
z= (p-1)*(q-1);
for(int i=2;;i++){
    d = gcd(z,i);
    if(d==1) {
        d=i;
        break;
    }
}
//cout<<z<<" "<<d<<endl;

for(int i=1;;i++){
    e=(i*d)%z;
    if(e==1) {
        e=i;
        break;
    }
}

map<char, int>mp;
map<int, char>rmp;
char a='a',b='a';
for(int i=0;i<26;i++)   mp[a++]=i;
for(int i=0;i<26;i++)  rmp[i]=b++;

char plainText,encryptedText,decryptedText;
cin>>plainText;



int pt,ct,dt;
pt=mp[plainText];
cout<<"plainText "<<plainText<<endl;

ct=pow(pt,e);
ct=ct%n;
encryptedText = rmp[ct];
cout<<"encryptedText "<<encryptedText<<endl;

dt=pow(ct,d);
dt=dt%n;
decryptedText = rmp[dt];

cout<<"decryptedText "<<decryptedText<<endl;

return 0;
}