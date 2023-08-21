#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;


bool checkPalindrome(string s,int start,int end){

    if(start==end) return true;
    if(s[start]!=s[end-1]) return false;

     checkPalindrome(s, start-1, end-1);

}

int main()
{
 FAST;

string str;
cin>>str;
int n=str.size();
if(checkPalindrome(str,0,n))
cout<<"yes";

else cout<<"no";


return 0;
} 

