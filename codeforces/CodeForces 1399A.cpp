#include<bits/stdc++.h>
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
		vector<int> a(n);
		for (auto &x : a) cin >> x;
		sort(a.begin(), a.end());
		int res =0;
		for (int i = 0; i < n-1; ++i) {
            if (abs(a[i] - a[i + 1]) > 1)
				res ++;
		}
		if (res<1) 
        cout << "YES" << endl;
		else 
        cout << "NO" << endl;
	}

return 0;
}