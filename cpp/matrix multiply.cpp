#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int main()
{   int a,b,x,y;
    int ar1[MAX][MAX];
    int ar2[MAX][MAX];
	int ar3[MAX][MAX];
	cin>>a>>b;
	
	for(int i=0;i<a;++i)
		{
			for(int j=0;j<b;++j)
			{
				cin>>ar1[i][j];
			}
		}
	cin>>x>>y;
	
		for(int i=0;i<x;++i)
		{
			for(int j=0;j<y;++j)
			{
				cin>>ar2[i][j];
			}
		}
	for(int i=0;i<a;++i)
	for(int j=0;j<y;++j){
		ar3[i][j]=0;
	for(int k=0;k<y;++k)
		{	
				ar3[i][j]+=ar1[i][k]*ar2[k][j];
				//cout<<ar3[i][j]<<"\n";
		}
	}
	for(int i=0;i<a;++i)
	for(int j=0;j<y;++j){
		cout<<ar3[i][j]<<" ";
	if(j == y-1)
           cout<<"\n";	
	}
	
	return 0;
}