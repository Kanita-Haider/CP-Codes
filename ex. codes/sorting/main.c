#include <stdio.h>
#include <stdlib.h>

int main()
{   int s[5]={1,4,5}, i,j;
     int ss[];
for(i=1;i<=5; i++){
    for(j=0; j<5-i;j++){
              if(s[j]>s[j+1]){
                 int temp = s[j];
                 s[j] = s[j+1];
                   s[j+1]= temp;
               }
       }
}     
  for(i=0;i<5; i++)
    printf("%d \t",s[i]);

    return 0;
}
       
