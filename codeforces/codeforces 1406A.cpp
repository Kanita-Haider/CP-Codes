#include<bits/stdc++.h>
#include <numeric>  
#define ll long long
#define llu long long unsigned
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;
while (t--) {
		int n;
		cin >> n;
        int x;
		vector<int>a(101);
		for (int i = 0; i < n; i++) {
            cin >> x;
            a[x]++;
            }
        int res= 0;
		for (int i=0;i<=101;i++) {
            if(a[i]>=1)
                a[i]--;
			else {
                res+=i;
                break;}
		}
		for(int i=0;i<=101;i++){
            if(a[i]>=1)
                a[i]--;
			else {
                res+=i;
                break;
            }
         }
        cout << res << endl;
	}

return 0;
}