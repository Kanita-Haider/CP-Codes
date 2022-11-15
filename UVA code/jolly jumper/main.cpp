#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin>>n) {
			int arr[n+1];
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		int d[n+1] = {0}, flag = 0;
		for(int i = 1; i < n; i++) {

			if(abs(arr[i] - arr[i-1]) < n)
				d[abs(arr[i] - arr[i-1])]++;
		}
		for(int i = 1; i < n; i++)
			if(d[i] == 0)
				flag = 1;

		if(flag)
			cout<<"Not jolly"<<endl;
		else
			cout<<"Jolly"<<endl;
	}
    return 0;
}
