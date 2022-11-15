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
 llu a,b;

while(t--){
      cin >> a >> b;
      pair<llu, int> best;
      best.first = best.second = 0;

      for (llu i = a; i <= b; i++) {

         int count = 0;
         llu temp = sqrt(i);
         for (llu j = 1; j <= temp; j++) {
            if (i % j == 0) count++;
            }

         count *= 2;
         if (temp * temp == i) 
                --count;

         if (count > best.second) {
                best.first = i;
                best.second = count;
            }
        }
      cout << "Between " << a << " and " << b << ", " << best.first << " has a maximum of " << best.second << " divisors." << endl;
   
   }

return 0;
}
