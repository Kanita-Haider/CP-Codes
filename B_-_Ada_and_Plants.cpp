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
    int t;
    cin>>t;
     
     for(int i=1; i<=t;i++){
         int n,k;
        cin>>n>>k;
        int arr[n+5];
        if(k>=n) k=n-2;
        ll sum=0,ans=0;
         for(int i=1; i<=n;i++){
        cin>>arr[i];
        }
      multiset<int>s;
       k+=2;
      for(int i=1; i<=n;i++){
        
      s.insert(arr[i]);
            
        if(i>k) s.erase(s.find(arr[i-k]));

       sum=*s.rbegin()-*s.begin();
       ans=max(ans,sum);
     
        }
        cout<<ans<<"\n";
    }
    return 0;
    } 