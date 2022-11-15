#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void quicksort(int arr[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(arr[i]<=arr[pivot] && i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;

         if(i<j)  
          swap(arr[i],arr[j]);
      }

      swap(arr[pivot],arr[j]);

      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);
   }
}

int main()
{
 FAST;
int n;
cin>>n;
int arr[n+5];

for(int i=0; i<n;i++)  cin>>arr[i];
   quicksort(arr,0,n-1);
for(int i=0; i<n;i++)  cout<<arr[i]<<" ";

return 0;
}