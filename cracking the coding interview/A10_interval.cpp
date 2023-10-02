// #include <bits/stdc++.h>
// #define ll long long
// #define mp make_pair
// #define pb push_back
// #define ff first
// #define ss second
// #define nl "\n"
// #define pii pair<ll, ll>
// #define pi acos(-1.0)
// #define mset(a, b) memset(a, b, sizeof(a))
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
// using namespace std;



//time complexity O(nlogn)
//space complexity O(1)
  

bool compare(vector<ll>& p1, vector<ll>& p2) {
    return p1[1] < p2[1];
}

int maxDisjointInterval(vector<vector<ll>>& v) {
    sort(v.begin(), v.end(), compare);
    int ans = 0;
    ll curr = INT_MIN;
    for (auto a : v) {
        ll start = a[0], end = a[1];

        if (start > curr) {
            curr = end;
            ans++;
        }
    }

    return ans;
}

// int main() {
//     ll n, ans = 0, m=2;
//     cin >> n;

//     vector<vector<ll>> v( n,vector<ll> (m));
//     for (ll i = 0; i < n; i++) {
//         for (ll j = 0; j < m; j++) {
//             cin >> v[i][j];
         
//         }
//     }

//     cout << maxDisjointInterval(v) << nl;

//     return 0;
// }
