#include<iostream>
using namespace std;

int main()
{
    float x[20], y[20][20];
    int i,j, n;
    cin >> n;

    for(i = 0; i < n ; i++){
        cin >> x[i];
        cin >> y[i][0];
    }
    float x0,h, sum=0,sum2=0;    cin>>x0;
    int k;
    h=x[1]-x[0];
     
    for(i = 0; i < n ; i++)
    {
        if(x[i]==x0)   k=i;
    }

    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }

    for(i = 0; i < n; i++)
    {
        cout << x[i];
        for(j = 0; j < n-i ; j++)
        {
            cout << "\t" << y[i][j];
        }
        cout << endl;
    }
    for(j = 0; j < n-k ; j++)
    {
        if(j%2==0) 
            sum +=y[k][j+1]/(j+1);
        
        else
            sum -=y[k][j+1]/(j+1);
    }
    cout<<"\nFirst Derivation : "<<sum/h<<endl;
    for(int i=0 ; i<10; i++)
    {
        if(i>(n-k))
        {
            y[k][i]=0;
        }
    }
    sum2=y[k][2]-y[k][3]+(11/12)*y[k][4]-(5/6)*y[k][5];
    cout<<"Second Derivation : "<<sum2/(h*h);

}
