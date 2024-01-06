#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;


void
solve (ll int arr[], ll int i, ll int n, ll int max)
{
  if (i==n)
    {
      cout << max << endl;
      return;
    }
   // cout<<"i "<<n-1<<endl;
    max += arr[i];
    
  return solve (arr, i + 1, n,  max);
}


int main()
{
FAST;
  ll int n;
  cin >> n;
  ll int arr[n], i, max = 0;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  solve (arr, 0,n, max);

return 0;
}