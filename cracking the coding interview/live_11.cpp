//Time Complexity: O(N * N!)
//Space Complexity: O(N!)

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
