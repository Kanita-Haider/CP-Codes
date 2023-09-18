#include<bits/stdc++.h>
using namespace std;


 
int  main()
{
    
    long long n,ans=0,k;
cin>>n>>k;;
vector<long long>v(n),v1;
for (auto &it : v ) cin >> it ;

sort(v.begin(),v.end());

for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
      v1.push_back(v[i]*v[j]);
   }
}

sort(v1.begin(),v1.end());

//for (auto it : v1 ) cout<<it<<" ";

cout<<v1[k-1];
        

    return 0;
}