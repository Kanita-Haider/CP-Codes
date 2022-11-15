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
    while(t--){
    int  n,q;
    cin>>n;
    q=n;
    int arr[n+5];
    for(int i=1; i<=n;i++){
            arr[i]=i;
           
    }
     for(int i=1; i<=n;i++){
         prev_permutation(arr+1, arr + n+1);
         for(int j=1; j<=n;j++){
         cout<<arr[j]<<" ";
         
         }
    cout<<""<<"\n";
     }
    }
    return 0;
    }