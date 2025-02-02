#include<bits/stdc++.h>
using namespace std;
int main(){
        
int n,cnt=0,x; 
cin>>n;
//cout<<n;
int arr[n+5];

for(int i =0;i<n;i++){
    cin>>x;
    if(i==0) arr[i]=x;
    else
    arr[i]=arr[i-1]+x;
    if(arr[i]%2==0) cnt++;
}

cout<<cnt<<endl;

  for(int i =n-1;i>=0;i--) 
    cout<<arr[i]<<" ";

    
}