#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i,n, arr[20],even,odd;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter the array \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]) ; 
      printf("\t %d",arr[i]); 
    }
    printf("\n\n")  ;
    for(i=0;i<n;i++)
    {
      if((arr[i]%2)==0)
         {
             even=arr[i];
             printf("\t even %d",arr[i]);
         }
           else{
             odd=arr[i];
             printf("\t odd %d",arr[i]);
}
 //printf("\t %d",arr[i]); 
        //  printf(" \n even \t  %d",even);
          //printf("\n  odd \t  %d",odd);
    } 
    return 0;
}
