#include<stdio.h>
int main()
{
    int n,tallest,shortest, *height;
    printf("Enter the number of students :  \n");
    scanf("%d",&n);
      height = (int*) malloc(n * sizeof(int));
    
    for(int i=0;i<n;i++)
    {
   
        printf("Enter height :  \n");
    scanf("%d",height + i);
       
    }

 
    
tallest=0 ;
shortest = 1000;
    for( int i=0;i<n;i++)
      {
         if(*(height+i)>tallest)
              tallest=*(height+i);
         //if(*(height+i)< shortest)
             // shortest=*(height+i) ;
     }
     printf(" \n tallest %d",tallest) ;
    // printf("\n shortest %d",shortest);
      // printf("\n height difference %d",tallest-shortest);

         free(height);
 return 0;
}
