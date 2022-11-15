#include <bits/stdc++.h>
#define  MAX 1000000
using namespace std;

char primes[MAX];

void seive( ){
    int i, j, root;

	for(i=0;i<MAX;i++)
                  primes[i]=1;

    root=sqrt(MAX);
	for(i=2;i<root;i++){
		if(primes[i]){

			for(j=i;i*j<MAX;j++){
				primes[i*j] =0;
				}
			}
	}


}

int main()
{
   int n,flag,p2;
   seive();
   for(int i=0;;i++){
		flag=0;
	cin>>n;
	if(n==0)
	{
		break;
	}
	for(int i=2;i<=n/2;i++) {
				p2=n-i;
				if(primes[p2]==1 && primes[i]==1 ){
				  flag++;

			}

	}

		cout<<flag<<endl;

   }

    return 0;
}
