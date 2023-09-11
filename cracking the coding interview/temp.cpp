#include<bits/stdc++.h>
using namespace std;


 
int main()
{
    
        long long n, k,ans=0;
         //cin>>n>>k;
         cin>>n;
        vector<long long> arr(n);
        for(auto& x : arr)
        cin >>x ;

        sort(arr.begin(),arr.end());

    //  for(int i=0; i<arr.size();i++) 
    //  {
    //     //cout<<arr[i]<<endl;
    //     if(i==){
            
          cout<<arr[(arr.size()/2)+1]<<endl;
    //      break;
    //     }
        
    //  }
    
    //cout<<ans<<endl;
    
    
 
    return 0;
}