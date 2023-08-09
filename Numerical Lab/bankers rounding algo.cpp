#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    string s;
    cin>>s;
    int d=4,cnt1=0,index;

    if(s[0]=='0') cnt1--;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.') continue;
        cnt1++;

        if(cnt1==d) {
            int n= s[i+1]-'0';
            
            if(n>5)
                 s[i]++;
            else if(n==5)
            {
                int m= s[i]-'0';
                if(m%2!=0)
                     s[i]++;
            }
            index=i;
            break;
        }
    }

    for(int i=0; i<=index;i++ )   cout<<s[i];

    return 0;
}