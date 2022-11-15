#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,test;
    cin>>test;
    for(int i=1;i<=test;i++){
			 int b=0,w=0,t=0,a=0;
  cin>>n;
  char ar[n]  ;
	  for(int j=0;j<n;j++) {
		cin>>ar[j];
		if(ar[j]=='B')
				b++;
		else if(ar[j]=='W')
			w++;
		else if(ar[j]=='T')
			t++;
		else
				a++;
	  }
	   if(a==n)
		cout<<"Case "<<i<<":"<<" ABANDONED"<<endl;

	  else if(w==n || w+a==n)
		cout<<"Case "<<i<<":"<<" WHITEWASH"<<endl;
	  else   if(b==n || b+a==n)
			 cout<<"Case "<<i<<":"<<" BANGLAWASH"<<endl;
		 else if(w>b)
		cout<<"Case "<<i<<":"<<" WWW "<<w<<" " <<"-"<<" "<<b<<endl;
		 else if(b>w)
		cout<<"Case "<<i<<":"<<" BANGLADESH "<<b <<" " <<"-"<<" " <<w<<endl;
		else if(b==w)
			cout<<"Case "<<i<<":"<<" DRAW "<<w <<" " <<t<<endl;
}
return 0;
}
