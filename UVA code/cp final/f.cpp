#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
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
 FAST;
int n,flag,p1,p2;
   seive();
while(cin>>n){
    flag=0;
    for(int i=2;i<=n/2;i++) {
        if(n%i==0){
				p2=n/i;
				if(primes[p2]==1 && primes[i]==1 ){
				  flag++;
				  p1=i;
				  break;
			}
              break;
        }
    else
        continue;
	}
	if(flag>=1)
	cout<<n<<" is a magic number, factors are "<<p1<<" and "<<p2<<endl;
	else
		cout<<n<<" is not a magic number"<<endl;
	}
return 0;
}