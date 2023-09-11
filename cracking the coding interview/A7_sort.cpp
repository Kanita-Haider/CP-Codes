//time complexity O(n)
//space complexity O(1)

void mergeSort(vector<int>& v1, vector<int>& v2, int m , int n ){

  
    for(int i=m,j=0;j<n;j++,i++)
        v1[i]=v2[j];

    sort(v1.begin(),v1.end());

    //for(auto x : v1) cout<<x<<" ";

}


// int main()
// {

// int n,m;
// cin>>m>>n;
// vector<int>v1(m+n),v2(n);
// for(auto& x : v1)
//         cin >>x ;


// for(auto& x : v2)
//         cin >>x ;

// mergeSort(v1,v2, m ,n);

// return 0;
// } 

