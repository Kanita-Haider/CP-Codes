#include <bits/stdc++.h>
using namespace std;


int main()
{
	

    int n,x,sum=0;
    cin>>n>>x;
    vector<int>v(n);

    for(int i=0,j=n-1;i<n;i++,j--) {
            cin>>v[i];
            sum=sum+(v[i]* pow(x,j));
    }
    
	cout << sum<<endl;;
	return 0;
}
