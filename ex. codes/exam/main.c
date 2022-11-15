#include <stdio.h>
#include <stdlib.h>

int main()
{     int n;
    printf("enter yyyy/mm/dd  \n");
    scanf("%d",&n);
int arr[n],i ;
printf("Enter the nmbr: \n")  ;
scanf("%d",arr[i])    ;
     for(i=0;i<n;i++){
      if((arr[i]%3==0) || (arr[i]%5==0))
      {
         printf("%d ",arr[i]) ;
       }
 printf("%d ",arr[i]) ;
}
   
    return 0;
}
