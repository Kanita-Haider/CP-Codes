#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 // #ifndef ONLINE_JUDGE
  //freopen("E:/vs code/input.txt", "r", stdin);
 // freopen("E:/vs code/output.txt", "w", stdout);
//#endif  
 int n;
  cin>>n;
  for(int i=1; i<=n;i++){
    if(i%2==0)
   cout<<i<<endl;
  
}
   if(n==0 || n==1)
      printf("-1\n");
      
    return 0;
}