#include<bits/stdc++.h>
using namespace std;


bool customCompare(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second < b.second; 
    }
    return a.first < b.first; 
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    map<int, int> frequencyMap;
    for (int num : arr) {
        frequencyMap[num]++;
    }

    vector<pair<int, int>> freq;

    for ( auto& i : frequencyMap) {
        freq.push_back(i);
    }

    sort(freq.begin(), freq.end(), customCompare);

    for ( auto& pair : freq) {
        for (int i = 0; i < pair.second; ++i) {
         cout << pair.first << " ";
        }
    }

    return 0;
}

