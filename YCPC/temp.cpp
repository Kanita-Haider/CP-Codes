#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,sum=0;
    cin>>n>>m>>k;
    vector<long long int>v(n),index(n);
    multiset<long long int>s;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        index[i]=v[i];
    }
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<m*k;i++)
    {
        //cout<<i<<" v[i] "<<v[i]<<endl;
        
        sum+=v[i];
        s.insert(v[i]);
    }
    cout<<sum<<endl;

        int partion = 1;    // present partition indicator
        for(int i=0;i<k;i++){
            int cur=0;
            while(1){
                

                if(s.find)
            }
        }

}

            // if element is found then add that element to the present partition
            itr = s.find(a[i++]);
            if(itr != s.end()){
                cur++;
                s.erase(itr);
            }
 
            // if number of elements are 'm' then move to next partition by incrementing ctr
            if(cur == m){
                ctr++;
                cout << i << " ";
                break;
            }
        }