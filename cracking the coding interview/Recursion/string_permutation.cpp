
#include <bits/stdc++.h>
using namespace std;

void permute(string& a, int l, int r)
{

	if (l == r)
		cout << a << endl;
	else {
		for (int i = l; i <= r; i++) {

			swap(a[l], a[i]);

			permute(a, l + 1, r);

			swap(a[l], a[i]);
		}
	}
}


// Driver Code
int main()
{
	string str;
	cin>>str;
	int n = str.size();
	sort
	permute(str, 0, n - 1);
	return 0;
}
