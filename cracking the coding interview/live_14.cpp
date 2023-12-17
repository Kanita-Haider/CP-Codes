// time complexity O(n)
// space complexity O(n)
 
 
 int climbStairs(int n) {
        int cnt[50];
         cnt[1]=1, cnt[2]=2;
        for(int i=3;i<=n;i++){
            cnt[i]= cnt[i-1]+ cnt[i-2];
        }
        return cnt[n];
    }

    