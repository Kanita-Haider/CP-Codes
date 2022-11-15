#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
 FAST;
int flag;
string s;
while(getline(cin,s)){
    if(s=="*") break;
    flag=0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
     for(int i=0; i<s.size();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                flag++;
    else continue;

    }
    cout<<flag<<"\n";
}

return 0;
}