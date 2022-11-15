#include<bits/stdc++.h>
#define ll long long
#define llu long long unsigned
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
string s;
    while(cin>>s){
        int sum=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='a' &&s[i]<='z'){
                sum+=s[i]-'a'+1;
            }
            else {
            sum+=s[i]-'A'+27;
        }
        }
        int c=0;
        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
                c=1;
        }
        if(c==0)
            cout<<"It is a prime word."<<endl;
        else
        cout<<"It is not a prime word."<<endl;
    }

return 0;
}

