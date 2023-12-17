#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    float x[100], y[100];

    cin>>n;

    for (int i=0; i<n; i++)
    { 
        cin>>x[i];
        cin>>y[i];
    }

    cout<<"\n\nx   y\n";
    for (int i=0; i<n; i++)
    {
        cout<<x[i] << "   "<<y[i]<<endl;
    }

    float sumy=0, sumx=0, sumxy=0, sumxx=0;
    for (int i=0; i<n; i++)
    {
        sumy+= y[i];
        sumx+= x[i];
        sumxy+= y[i]*x[i];
        sumxx+= x[i]*x[i];
    }

    
    float a=(sumx*sumxy-sumy*sumxx)/(sumx*sumx-n*sumxx);
    float b=(sumy*sumx-n*sumxy)/(sumx*sumx-n*sumxx);

    cout<<"\na  : "<< a<<endl;
    cout<<"b  : "<< b<<endl;
    cout<<"\nThe best fit value of curve is : y = "<< a<< " + "<< b<< "x"<<endl;


}
