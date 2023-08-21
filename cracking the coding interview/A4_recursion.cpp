//time complexity O(m)
//space complexity O(1)

int multiply(int n,int m){

    if(m==0) return 0;

    return n+multiply(n,m-1);


}


