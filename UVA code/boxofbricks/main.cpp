#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,avg,sum,x;
    for(int i=1;;i++){
			cin>>n;
			if(n==0){
				break;
			}
			int arr[n+1];
			sum=0,avg=0;
		  for(int i=1;i<=n;i++)
		  {
		  	cin>>arr[i];
		  	sum+=arr[i];
		  }
		  //cout<<sum<<endl;

		  avg=sum/ n;
		  //cout<<avg<<endl;
		  sum=0;
		  for(int i=1;i<=n;i++){
			x=abs(avg-arr[i]);
			sum+=x;
		  }

		 // cout<<sum<<endl  ;
		  avg=sum/2;
		   cout<<"Set #"<<i<<endl;
		  cout<<"The minimum number of moves is "<<avg<<"."<<endl<<endl;
    }
    return 0;
}
