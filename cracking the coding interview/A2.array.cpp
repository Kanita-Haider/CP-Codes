//time complexity O(n)
//space complexity O(1)

int stock(vector<int>v){

    int n=v.size(),minn=v[0],maxx=0;
    int ans=0, res;
    for(int i=1;i<n;i++){

        if(v[i]<minn){
            minn=v[i];
            maxx=0;
        }
        else if(v[i]>maxx && v[i]>minn) maxx=v[i];
        res=maxx-minn;
        ans=max(res,ans);
    }

    return ans;

}




