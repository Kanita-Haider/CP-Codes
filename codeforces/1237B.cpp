#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
int t;
cin>>t;
int arr[t+5], ar2[t+5], expos[t+5],flag=0,max=0;
 for(int i=1; i<=t;i++){
        cin>>arr[i];
}
for(int i=1; i<=t;i++){
        cin>>ar2[i];
        expos[ar2[i]]=i;
}
 for(int i=1; i<=t;i++){
     //cout<<expos[arr[i]]<<" ";
    if(expos[arr[i]]>max){
        max=expos[arr[i]];
        //flag++;
    }
    else
        flag++;
            
}
//cout<<""<<"\n";
cout<<flag<<"\n";
return 0;
}