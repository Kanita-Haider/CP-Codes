#include<bits/stdc++.h>
using namespace std;


void merge(vector<long long>& arr, long long l, long long m, long long r) {
    long long n1 = m - l + 1;
    long long n2 = r - m;

    vector<long long> left(n1);
    vector<long long> right(n2);

    for (long long i = 0; i < n1; i++) {
        left[i] = arr[l + i];
    }
    for (long long i = 0; i < n2; i++) {
        right[i] = arr[m + 1 + i];
    }

    long long i = 0;
    long long j = 0;
    long long k = l;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

vector<long long> mergeSort(vector<long long>& arr, long long l, long long r) {
    if (l < r) {
        long long m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

         merge(arr, l, m, r);
         return arr;
    }
}

int main() {

    long long n;
    cin>>n;

    vector<long long> arr (n);

   for(auto& x : arr) cin>>x;

     mergeSort(arr, 0, arr.size() - 1);

    for (long long num : arr) {
        cout << num << " ";
    }

    return 0;
}
