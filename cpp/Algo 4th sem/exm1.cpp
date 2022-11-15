#include<bits/stdc++.h>
#define mset(a, b) memset(a, b, sizeof(a))

using namespace std;

int t[100][100];

 int knapsack(int wt[],int val[],int w,int n){
  
    if(n==0 || w==0)  return 0;
    if(t[n][w]!=-1)  return t[n][w];
    if(wt[n-1]<=w)
        return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),
                            knapsack(wt,val,w,n-1));
    else if(wt[n-1]>w) 
             return t[n][w]=knapsack(wt,val,w,n-1);

}

int main()
{
int n,w;
cin>>n;
int wt[n+5], val[n+5];
 for(int i=0; i<n;i++)
     cin>>wt[i];

for(int i=0; i<n;i++)
     cin>>val[i];

cin>>w;
mset(t,-1);
cout<<knapsack(wt,val,w,n-1);


return 0;
}