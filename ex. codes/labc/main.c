#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n, i,arr[1000];
     scanf("%d",&n);
     for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
        if(arr[i]%3==0 || arr[i]%5==0) {
          printf("%d ",arr[i]);  }
         }
   
    return 0;
}
