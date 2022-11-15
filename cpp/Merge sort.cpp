#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
#define mp make_pair
#define pb push_back
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void mergesort(int arr[],int i,int j);
void merge(int arr[],int i1,int j1,int i2,int j2);


int main()
{
 FAST;
int t,n;
cin>>t;
int arr[t+5];

 for(int i=0; i<t;i++){
     cin>>arr[i];
}

mergesort(arr,0, t-1);

 for(int i=0; i<t;i++){
cout<<arr[i]<<" ";
}

return 0;
}


void mergesort(int arr[],int i,int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2;
mergesort(arr,i,mid); 
mergesort(arr,mid+1,j); 
merge(arr,i,mid,mid+1,j); 
}
}

void merge(int arr[],int i1,int j1,int i2,int j2)
{
int temp[50];
int i,j,k;
i=i1; 
j=i2;
k=0;

while(i<=j1 && j<=j2) 
{
if(arr[i]<arr[j])
temp[k++]=arr[i++];
else
temp[k++]=arr[j++];
}

while(i<=j1) 
temp[k++]=arr[i++];

while(j<=j2) 
temp[k++]=arr[j++];

for(i=i1,j=0;i<=j2;i++,j++)
arr[i]=temp[j];

}