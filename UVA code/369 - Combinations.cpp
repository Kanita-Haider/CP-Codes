    #include<bits/stdc++.h>
    #define ll long long
    #define ull unsigned long long
    using namespace std;
    
   
    int main()
    {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     double  n, r,a,b,c;
     while(1){
      
      cin >> n >> r;
      if(n==0 && r==0) break;
     
        c=1;
        a=n;
        b=n-r;

        while(b) {
            c = c*(a/b);
            a--;
            b--;
        }
    //cout<<n<<" things taken "<<r<<" at a time is "<<(long long int)c<<" exactly.\n";
    
    cout<< setprecision(0) << fixed<<n<<" things taken "<<r<<" at a time is "<<c<<" exactly.\n";

     }
     return 0;
    }