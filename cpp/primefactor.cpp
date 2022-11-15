#include <bits/stdc++.h>
using namespace std;

void primefactor(int n){
    int flag=0;
	 while (n%2==0){
         flag++;
		//cout<<2<<" ";
		n=n/2;
	 }
     if(flag>0)
        cout<<"(2^"<<flag<<")";
     if(flag>0 && n>2)
          cout<<"*";
    else if(flag>1)
        cout<<"*";

	 for(int i=3;i< sqrt(n);i++){
         flag=0;
		while (n%i==0){
        flag++;
		//cout<<i<<" ";
		n=n/i;
		}
        if(flag>0 && n>2)
            cout<<"("<<i<<"^"<<flag<<")*";
        else if(flag>0)
             cout<<"("<<i<<"^"<<flag<<")";
        
          //cout<<"*";
	 }
	 if (n > 2)
         cout<<"("<<n<<"^1)";
}

int main()
{
   int num;
   cin>>num;
   primefactor(num);

    return 0;
}
