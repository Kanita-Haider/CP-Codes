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


void merge(int arr[], int low, int high, int mid){

    vector<int>temp;
    int left =low;
    int right = mid+1;

    while(left<=mid && right<=high){

        if(arr[left]<=arr[right]){
            temp.pb(arr[left]);
            left++;
        }

        else{
             temp.pb(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.pb(arr[left]);
            left++;
    }
    while(right<=high){
          temp.pb(arr[right]);
            right++;
    }
    
    for(int i=low;i<=high;i++)
        arr[i] = temp[i-low];

}

void mergeSort(int arr[], int low, int high){

    if(low>=high) return;
    int mid = (low+high)/2;

    mergeSort( arr, low, mid);
    mergeSort( arr, mid+1, high);
    merge( arr, low, high, mid);

}

int main()
{
 FAST;
int n,ans=0;
cin>>n;
vector<int>v(n+5);
int arr[n+5];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

mergeSort(arr, 0 , n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
} 

