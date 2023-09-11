#include <bits/stdc++.h>
using namespace std;
     
int main() {
    
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    
    int flag=0;

    for(int i=0;i<s.size();i++){

        int n= int(s[i]);
        //cout<<n<<endl;

       if((i+1)%2!=0){

        if(n>=97 && n<=122) {
            flag=1;
        }
        else {
            flag=0; break;
        }

       }
       else {
         if(n>=65 && n<=90) {
            flag=1;
        }
        else {
            flag=0; break;
        }
       }

    }

    if(flag==1) {
    cout<<"Balanced"<<endl;

    }
    else cout<<"Not Balanced"<<endl;
    }

    return 0;
}