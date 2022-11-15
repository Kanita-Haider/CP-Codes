#include<bits/stdc++.h>
using namespace std ;

#define   FastRead      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   ULL               unsigned long long
#define   LL                  long long
#define   ST                  string
#define   F                    first
#define   S                    second
#define   PB                 push_back
#define   MP                make_pair
#define   pi                   acos(-1.0)
#define   NL                 "\n"
#define    _                    " "

/*
vector<int>vec ;
pair<int, int>pr ;
set<int>st ;
map<int, int>mp ;
map<char, int> :: iterator it ;
for(it = mp.begin() ; it!=mp.end(); it++)
        cout<<(*it).second<<NL ;
*/


/// ---for Unordered map---
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
/// ---for Setprecision---
/* cout<< fixed << showpoint << setprecision(9) << */


int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;




int main ()
{
    FastRead ;

    int t, n, p, m, i, j, k, x, y, z, sum=0, l, r, f=0, flag=0, cnt=0, mx = INT_MIN, mn = INT_MAX ;
    //double p, q ;
    char ch ;
    string s, s1, s2 ;


    cin>>n>>p ;
    map<string, int> mp ;

    for(i=1; i<=n; i++)
    {
        cin>>s1>>s2 ;
        if(s1=="I")
        {
            for(j=0; j<s2.size(); j++)
            {
                s = s2.substr(0, j+1) ;
                mp[s]++ ;
            }
        }
        else
        {
            sum=0 ;
            if(mp[s2]==1)
            {
                for(j=0; j<s2.size(); j++)
                {
                    s = s2.substr(0, j+1) ;
                    sum+=mp[s] ;
                }
            }
            cout<<sum<<"\n" ;
        }
    }



    return 0 ;
}