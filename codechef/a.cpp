#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

int t,n,x,k,flag;
cin>>t;
    while(t--){
        cin>>n;
    vector<int>v(n);
     for(int i=0; i<n;i++){
         cin>>v[i];
    }
int maxIndex = max_element(v.begin(),v.end()) - v.begin();
int minIndex = min_element(v.begin(),v.end()) - v.begin();
cout<<minIndex<<" "<<maxIndex<<endl;
if(minIndex<maxIndex){
    if(minIndex<n-maxIndex)
    {
     x=minIndex;
     if(maxIndex-minIndex<n-maxIndex){
         x+=maxIndex-minIndex;
     }
     else{
         x+=n-maxIndex;
     }
       }
    else{
        x=n-maxIndex;
        if(maxIndex-minIndex<minIndex)
            x+=maxIndex-minIndex;
        else
            x+=n-minIndex;
    }
}
else{
    if(maxIndex<n-minIndex)
    {
     x=maxIndex;
     if(minIndex-maxIndex<n-minIndex){
         x+=minIndex-maxIndex;
     }
     else{
         x+=n-minIndex;
     }
       }
    else{
        x=n-minIndex;
        if(minIndex-maxIndex<minIndex)
            x+=minIndex-maxIndex;
        else
            x+=n-maxIndex;
    }
}
cout<<x+1<<"\n";
   }
 return 0;
}