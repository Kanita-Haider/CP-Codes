#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;

while(cin>>t){
   vector<int> a(t);

   for (auto &x : a)
    cin >> x;
        
		int res =0;
         for(int i = 1;i<t;++i)
            for(int j = 0;j<i;++j)
                if(a[j]>a[i])
                   res++;
		
        cout <<"Minimum exchange operations : "<<res << endl;

}
return 0;
}