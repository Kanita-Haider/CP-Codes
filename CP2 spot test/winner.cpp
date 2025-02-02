#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    
    while(t--){
        
int n,cnt=0; 
cin>>n;
//cout<<n;
int arr[n+5];

for(int i =0;i<n;i++){
    cin>>arr[i];
   // cout<<arr[i]<<endl;
    
}
for(int i =0;i<n-1;i++){
    
    if(arr[i]==arr[i+1]) {
        cnt++;
        //cout<<cnt<<endl;
        if(cnt==6) {
        break;
    }

    }
    
    else{
        cnt=0;
    }
    
    
}
//cout<<cnt<<endl;
if(cnt==6) cout<<"Predictable"<<endl;
else cout<<"Unpredictable"<<endl;

    }

}