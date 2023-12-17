#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    double A[n][n+1];
    double x[n] = {0}; 
    double x_new[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)   cin>>A[i][j];   
    }

    int max_iterations ; cin>>max_iterations;
    double tolerance = 0.001;

    for (int i = 1; i <= max_iterations; i++)
    {
        cout<<endl<<"iteration: "<<i<<endl<<endl;
        for (int i = 0; i < n; i++)
        {
            x_new[i] = A[i][n]; 

            for (int j = 0; j < n; j++)
            {
                if (i != j){
                    x_new[i] -= A[i][j] * x[j]; 
                }
            }
            x_new[i] /= A[i][i];
        }


        int flag= 1;
        for (int i = 0; i < n; i++)
        {
            if (fabs(x_new[i] - x[i]) > tolerance) {
                flag= 0;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            x[i] = x_new[i];
            cout<<"x["<<i<<"]:"<<x[i]<<endl;
        }
        if (flag)
        {
            cout<<endl<<"Converged after "<<i <<" iterations.\n";
            break;
        }
    }
    cout<<endl<<"Value of X,Y,Z"<<endl;
    
    for (int i = 0; i < n; i++)  cout<<"x["<<i<<"] = "<< x[i]<<endl;
  
    return 0;
}
/*
3
5 2 1 12
1 4 2 15 
1 2 5 20
8
*/



