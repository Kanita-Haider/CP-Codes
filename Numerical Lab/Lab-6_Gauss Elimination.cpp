#include<bits/stdc++.h>
using namespace std;

int main() {
  
    int N ;cin>>N;
    double mat[N][N+1],x[N];
	double temp,s;
	cout<<fixed;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N+1; j++)  cin>>mat[i][j];
	}
	for(int j=0; j<N-1; j++)
	{
		for(int i=j+1; i<N; i++)
		{
			temp=mat[i][j]/mat[j][j];

			for(int k=0; k<N+1; k++)
				mat[i][k]-=mat[j][k]*temp;
		}
	}
	cout<<"Upper Triangular Matrix is:\n";
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N+1; j++)
		cout<<setprecision(2)<<mat[i][j]<<"\t";
		cout<<endl;
	}
	for(int i=N-1; i>=0; i--)
	{
		s=0;
		for(int j=i+1; j<N; j++)
		s += mat[i][j]*x[j];
		x[i]=(mat[i][N]-s)/mat[i][i];
	}
	cout<<"\nThe Solution is:\n";
	for(int i=0; i<N; i++)
	 cout<<"x["<<i+1<<"]="<<setprecision(2)<<x[i]<<endl;
    return 0;
}