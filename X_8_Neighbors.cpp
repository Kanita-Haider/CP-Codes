#include<bits/stdc++.h>
using namespace std;

int main(){
    {
  
  int r,c,x,y;
  cin>>r>>c;
  char arr[r+5][c+5];
  //cout<<r<<"\n";
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
            cin>>arr[i][j];
           // cout<<arr[i][j]<<"\n";
    }
  }
     cin>>x>>y;

    // 100 100 = total = 100^2
    //10^5 10^5 = (10^5)^2 =10^10
     int flag=0;

  for(int i=x-1;i<=x+1;i++){
    for(int j=y-1;j<=y+1;j++){
        // cout<<arr[i][j]<<"\n";

            if(i==x && j==y) continue;
           if(arr[i][j]=='.'  ){
             // cout<<arr[i][j]<<"\n";
            flag=1;
            
            break;
           }
           
    }
  }

if(flag==0){
    cout<<"yes";
    
}
else cout<<"no";


return 0;
} 
}
