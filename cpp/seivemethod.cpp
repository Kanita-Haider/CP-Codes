#include <bits/stdc++.h>
#define MAX 1000
 using namespace std;

 int primes[MAX+1];

int main(){
    int i,j;
	memset(primes, 1 , sizeof(primes) )  ;

	for(i=2;i<MAX;i++){
		if(primes[i]){
				///multiple
			for(j=i;i*j<MAX;j++){
				primes[i*j] =0;
			}
				 ///addition
			//for (j=i*i;j<MAX; j+=i){
				//primes[j] =0;
			//}
			}
	}
	for(i=2;i<MAX;i++){
		if(primes[i]){
				cout<<i<<" ";
			}
		  }
    return 0;
}
