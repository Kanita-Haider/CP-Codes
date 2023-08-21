#include<bits/stdc++.h>
using namespace std;


 
void permute(vector<int>list,vector<int>used,vector<int> freq){

    if(used.size()==list.size()){
        for (auto& it : used)
           cout << it << " ";
       cout << endl;
    }

    for(int i=0;i<list.size();i++){

        if(!freq[i]){
            used.push_back(list[i]);
            freq[i]=1;
            permute(list,used,freq);
            freq[i]=0;
            used.pop_back();
        }
    }
}


int main()
{
int n;
cin>>n;

vector<int>list(n);

vector<int>used;
vector<int> freq(n);
for(int i=0;i<n;i++){

    cin>>list[i];
    
}

permute(list,used,freq);

return 0;
} 

