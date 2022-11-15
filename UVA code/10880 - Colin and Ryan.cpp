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
int c,r;
int flag = 1;
 while(t--){
      cin>>c>>r;
        set<int> res;
        // c-r = g*q, find all possible multiplier q
        int dif = c-r;
        cout << "Case #" << flag++ << ":";
        if(dif == 0){
            cout << " 0" << endl;
            continue;
        }
        for(int i=1;i*i<=dif;i++)
            if(dif%i == 0){
                res.insert(dif/i);
                res.insert(i);
            }
        for(auto i : res)
            if(i > r) cout << " " << i;
        cout << endl;
    }
return 0;
}