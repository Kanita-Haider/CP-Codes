#include<bits/stdc++.h>
using namespace std;


int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
int n;
int g,l;
cin>>n;
 for(int i=1; i<=n;i++){
cin>>g>>l;
if(l%g==0)
   cout<<g<<" "<<l<<"\n";
else
    cout<<"-1"<<"\n";

}
 return 0;
}