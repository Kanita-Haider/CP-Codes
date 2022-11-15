#include <iostream>
using namespace std;

int main()
{
   int n;
   while(cin>>n){
   for(int i=1;i<=61*n;i++) {
		if(i=>n && i<=n*5)
			cout<<'*';
		if(i==n+1) {
			for(int j=1;j<=n;j++){
				 			cout<<'.';
			}
			i=i+n;
		}
		if(i==((5*n)+n+1)) {
			for(int j=1;j<=n;j++){
				 			cout<<'.';
			}
			for(int j=1;j<=n*3;j++){
				 			cout<<'*';
			}
			for(int j=1;j<=n;j++){
				 			cout<<'.';
			}
			i=i+(n*5)
		}


   }

   }

    return 0;
}
