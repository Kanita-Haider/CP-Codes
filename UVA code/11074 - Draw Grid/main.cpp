#include <iostream>

using namespace std;

int main()
{  int s, t, n;
	while(cin>>s>>t>>n)  {
		if(s==0 && t==0 && n==0){
			  break;
		}
		for(int i=0;i<n;i++){
			for(int k=0;k<s;k++) {
				 for( int j = 0 ; j < t ; j++)cout<<"*"   ;
					 for( int j = 0 ; j < s; j++)cout<<"."  ;
			}
		} cout<<endl;
	}
   // cout << "Hello world!" << endl;
    return 0;
}
