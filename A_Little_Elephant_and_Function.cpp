    #include<bits/stdc++.h>
    using namespace std;
    int main(){
     
         int n,i;
         while(cin>>n){
     
           cout<<n;
           for( i=1;i<n;i++)
             cout<<" "<<i;
            if(i==n)
             cout<<endl;
         }
    }