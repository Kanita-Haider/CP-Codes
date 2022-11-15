#include <iostream>

using namespace std;

int main()
{  int t,day,p,h;
  cin>>t;
  for(int i=1;i<=t;i++){
		cin>>day;
		cin>>p;
		long long arr[day+5]={0};
		int c=0;
		for(int i =1;i<=p;i++) {
			cin>>h;

			for(int j=h;j<=day;j=j+h){
					if(j%7==0 ||j%7==6){
						continue;
					}
				if(arr[j]==0)
					{  	 c++;
						arr[j]=1;
					//cout<<"*"<<j<<endl;
			}
			}

		}
		  cout<<c<<endl;
  }

    return 0;
}
