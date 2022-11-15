#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int square(int x)
{
    if (x >= 0) {
        int sr = sqrt(x);
        if (sr * sr == x)
			return sr;
    }
    return 0;
}

int main()
{
   int t;
   cin>>t;
   cin.get();
   while(t--){
		string s;

		getline(cin, s);
		int n=s.size();
		int m=square(n);
		if (m==0) {
			cout<<"INVALID"<<endl;
			continue;
		}


		for(int i=0;i<m;i++){
			for(int j=i;j<n;j=j+m){
			   cout<<s[j];
			}
		}
		cout<<endl;

   }
    return 0;
}
