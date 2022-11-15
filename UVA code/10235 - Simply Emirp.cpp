#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;

llu int prime(llu int n){
    if (n == 2)
        return 1;

    if (n % 2 == 0 || n < 2)
        return 0;

    llu int i;

    for (i = 3; i <= sqrt(n); i ++){
        if (n % i == 0)
            return 0;
    }

    return 1;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

llu int n,r,n2;
    while(cin>>n){
            llu int n1;
            n2=0;
            n1=n;
    if(prime(n)==1)
        {
            while(n1>0){
                r=n1%10;
                n2=n2+r;
                n2=n2*10;
                n1/=10;
            }
            n2/=10;

            if(prime(n2)==1 && n2!=n)
               cout<<n<<" is emirp."<<endl;
            else
                cout<<n<<" is prime."<<endl;
        }
        else{
            cout<<n<<" is not prime."<<endl;
        }
          }
return 0;
    }

