#include<bits/stdc++.h>
using namespace std;
 int n;
 int a[10000000];
 int lower( int y, int a[]){
            
    int mid;
    int low = 0;
    int high = n;
    while (low < high) {
        mid = low + (high - low) / 2;
        if (y < a[mid]) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
return low;
}

 int upper( int x, int a[] ){
    int mid;
    int low = 0;
    int high = n;
    while (low < high) {
        mid = low + (high - low) / 2;
        if (x <= a[mid]) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
 
  return low+1;
}

int main()
{    int q,i;
    cin>>n;
    
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    while(q--)
    {
         int x,y,r,l;
        cin>>x>>y;
        l=upper(x,a);
        r=lower(y,a);

        //cout<<l<<" "<<r<<"\n";
        cout<<r-l+1<<" ";
        
    }

   
    
}
