#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
#define MAX 1500

int primes[MAX];


void sieve( ){
    int i, j, root;

	memset(primes, 1 , sizeof(primes) )  ;

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
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n, c,cnt,j;
 sieve();

while (cin >> n >> c) {
        cnt=0;
        j=1;
int pri[MAX];
memset(pri, 0 , sizeof(pri) )  ;      
cout<<n<<" "<<c<<":";
    for(int i=1;i<=n;i++){
		if(primes[i]){
            pri[j]=i;
				//cout<<pri[j]<<" ";
               // cout<<i<<" ";
            j++;
            cnt++;
			}
		  }
          //cout<<cnt<<" ";
if(2*c>cnt){
     for(int i=1;i<=cnt;i++){
		
                cout<<" "<<pri[i];
			
		  }   
    }
else if(cnt%2==0){
    for(int i=(cnt+2-2*c)/2;i<=(cnt+1+2*c)/2;i++){
		
                cout<<" "<<pri[i];
			
		  }
}
 else{
     for(int i=(cnt+3-2*c)/2;i<=(cnt-1+2*c)/2;i++){
		 cout<<" "<<pri[i];
		  }
    } 
cout<<"\n\n";
 }

return 0;
}