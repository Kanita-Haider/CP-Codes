//time complexity O(n)
//space complexity O(1)


bool check(string str){

    int n=str.size();
    int f=0,s=0,t=0;

    for(int i=0;i<n;i++){
    if(str[i]=='(')  f++;
    else if(str[i]==')') {
            if(f>0) f--;
            else return false;
    }

    else if(str[i]=='{') s++;
    else if(str[i]=='}') {
            if(s>0) s--;
            else return false;
    }

    else if(str[i]=='[') t++;
    else {
        if(t>0) t--;
        else return false;
    }
    }
    
    if(s==0 && f==0 && t==0) return true;
    
    return false;
}
     

