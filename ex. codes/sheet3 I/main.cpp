#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

int n,t;
  cin>>t;
  for(int i=0;i<t;i++) {

 cin>>n;
 long long arr[n] ,sum,temp;

 for(int i=0;i<n;i++)  {

	cin>>arr[i];
     }
   temp=(int)6e6, sum=0;
 for(int i=0;i<n;i++)  {
		   for(int j=i+1;j<n;j++){

			 sum=arr[i]+arr[j]+j-i;

		  if(sum<temp)
			temp=sum;

		   }
	  }



		 cout << temp << endl;

  }
return 0;
}
