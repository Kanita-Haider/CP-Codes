#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int n;
	while(cin>>n) {
		int i, tmp = 1;
		for(i = 1; ; i++) {
			if(tmp%n == 0){
                break;}

			tmp = tmp*10 + 1;
			tmp %= n;
           //cout<<tmp<<"\n";
		}
		
        cout<<i<<"\n";
	}
return 0;
}