#include <bits/stdc++.h>
using namespace std;

void primefactor(int n){

	 while (n%2==0){
		cout<<2;
		if(n>2)
			cout<<" x ";
		else
			cout<<endl;
		n=n/2;
	 }

	 for(int i=3;i<= sqrt(n);i++){
		while (n%i==0){

		cout<<i;
		n=n/i;
		 if(n>2)
			cout<<" x ";
		else
			cout<<endl;
		//	}
		}
	 }
	 if (n > 2)
        cout<<n<<endl;
}

int main()
{
   int num;
  while(1) {
   cin>>num;
   if(num==0)
		break;

	   else if(num>0)  {
			cout<<num<<" = ";
			primefactor(num);
			}
   else{
		cout<<num<<" = -1 x ";
		num=abs(num);
		primefactor(num);
		}

  }
    return 0;
}
