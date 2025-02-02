#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,ans=0;
char c,john,grg;
cin>>n;
int arr[30]={0};
//cout<<n;
for(int i=0;i<n;i++){

        cin>>c;
        //cout<<c;
        arr[c-'A']++;
       // cout<<c-'A'<<endl;

}
int m=10e6, mm=0;
for(int i=0;i<26;i++){
    if (arr[i]==0) continue;
    if(arr[i]>=mm){
        mm=arr[i];
        john=i+'A';
    }
    
    if(arr[i]<m){
        m=arr[i];
        grg=i+'A';
    }

}
cout<<john <<" "<<grg<<endl;


return 0;
} 

