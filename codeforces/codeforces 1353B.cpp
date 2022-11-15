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
		int n,k;
		cin >> n>>k;
		vector<int> a(n);
        vector<int> b(n);

		for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
		sort(a.begin(), a.end());
        sort(b.begin(), b.end());
		int res =0;
		for (int i = 0,j=n-1; i < k; i++,j--) {
            if(a[i]<b[j])
                swap(a[i],b[j]);
		}

        for (auto x : a) 
           { 
             //cout<<x<<" ";
               res+=x;}
		 
        cout << res << endl;
		
	}

return 0;
}