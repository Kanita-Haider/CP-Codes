#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n,t;
  cin >> n;
    for(int j=1;j<=n;j++)
    {
        int flag=0,f;
        cin>>t;

        for(int i=1;i<=t;i++){
                  f=0;
        if(i<=9){
                flag++;
            }
        else{
        string st = to_string(i);

        for(int k=0;k<st.size()-1;k++){

        if(st[k]==st[k+1]){
                  f++;
           continue;

        }
        else{
             break;
             f=0;
        }
        }
        if(f>0)
         flag++;

            }

     }


     cout<<flag<<endl;

    }

 }

