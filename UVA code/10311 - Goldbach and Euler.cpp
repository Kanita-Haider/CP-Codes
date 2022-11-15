#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;

#define mx 100000000
int isprime[mx];

void prime()
{
    int len = sqrt(mx);
    isprime[0]=isprime[1]=1;
    for(int i=2;i<=len;++i)
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i;j<=mx;j+=i)
                isprime[j]=1;
        }
    }
}

int main()
{
    prime();
    ll n;
    while(cin>>n)
    {

        int f=0;
        if(n%2)
        {
            if((n-2)>2 && isprime[n-2]==0)
                cout<<n<<" is the sum of "<<2<<" and "<<n-2<<"."<<endl;
            else
                cout<<n<<" is not the sum of two primes!"<<endl;
        }
        else
        {
            for(int i=n/2+1;i<n;i++)
            {
                if(isprime[i]==0 && isprime[n-i]==0 && (n-i)%2!=0)
                {
                    cout<<n<<" is the sum of "<<n-i<<" and "<<i<<"."<<endl;
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<n<<" is not the sum of two primes!"<<endl;
        }
    }

    return 0;
}