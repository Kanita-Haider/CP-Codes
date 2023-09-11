#include<bits/stdc++.h>
using namespace std;

//time complexity O(n^2)
//space complexity O(n)

int takenTime(vector<int>& v, int k){

    queue<int>q;
    int time=0;
    int n=v.size();

    for(int i=0;i<n;i++)  q.push(i);

    while(!q.empty()){
        int front= q.front();
        q.pop();

        if(v[front]>0){
            v[front]--;
            time++;

            if(front==k && v[k]==0) break;
        }

        q.push(front);

    }
    return time;
}



int main(){

     int n,k; cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++)   cin>>v[i];
    
    cin >> k ;

    cout<<takenTime(v , k)<<endl;

    return 0;}
