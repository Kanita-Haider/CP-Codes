
#include <bits/stdc++.h>
using namespace std;

vector<string>& permute(string& a, int l, int r, vector<string>& res)
{

	if (l == r)

	res.push_back(a);

		//cout << a << endl;
	else {
		for (int i = l; i <= r; i++) {
			//cout <<"1 "<< a << endl;
			swap(a[l], a[i]);
			//cout <<"2 "<< a << endl;
			permute(a, l + 1, r, res);
			//cout <<"3 "<< a << endl;
			swap(a[l], a[i]);
			//cout <<"4 "<< a << endl;
		}
	}

	return res;
}


// Driver Code
int main()
{
	int n ; cin>>n;
	string str;
	cin>>str;
	vector<string> res;
	sort(str.begin(),str.end());
	permute(str, 0, n - 1,res);
	sort(res.begin(),res.end());
	set<string>ss;
	for(auto x:res){
		//cout<<x<<"\n";
		ss.insert(x);
		}

for(auto x:ss)
cout<<x<<"\n";

	return 0;
}

