    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    long long int n,q,i,mid,high,low,c;
    cin>>n>>q;
        int a[n+5];
    for(i=0;i<n;i++)
        {
    cin>>a[i];}
       // sort(a,a+n);
        while(q--)
        {
           long long int x;
    cin>>x;
            c=-1;
            low=0,high=n-1;
            while(low<=high)
            {
                 int mid=low+(high-low)/2;
                 //cout<<mid<<"\n";
               if(a[mid]==x)
                {
                 c=mid;
                    break;
                   } 
     
                 if(x>a[mid])
                {
                low=mid+1;
                    }
                    
                  if(x<a[mid])
                {
                    
                high=mid-1;
                    }
                    
            }
            if(c==-1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
            }
        return 0;
    }