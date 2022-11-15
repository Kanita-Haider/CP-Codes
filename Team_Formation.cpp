    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
    int n,t ;
     cin>>t;
      for(int i=0;i<t;i++) {
    		cin>>n;
    		int arr[n];
    	 for(int i=0;i<n;i++) {
    		cin>>arr[i];
    	 }
    	  for(int i=0;i<n;i++) {
    	  for(int j=0;j<n;j++) {
    		   //int max=arr[i];
    		   for(int k=i;k<=j;k++){
     
    			//if(arr[k]>max)
    				//max=arr[k];
     
    		   cout<<arr[k]<<" ";
    		    }
    		  //cout<<max<<" ";
              cout<<endl;
    	 }
    // cout<<endl;
      }
    	  
      }
     
     return 0;
    }