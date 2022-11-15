#include<stdio.h> 
int main()
{
 int n=1999,i,arr[2000];
      
  for( i=0; i<2000;i++){
       scanf("%d",&arr[i]);
       if(arr[i]==n){  
    printf("Correct");
      break;   }
    else
           printf("Wrong"); 
}

    return 0;
}
 


