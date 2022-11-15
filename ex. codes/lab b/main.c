#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float a,b, avg;
  
    scanf("%f %f",&a,&b) ;
     avg=((100*b)/a);
     if(avg<70)
    printf("%.2f%%, Not Allowed",avg);
       
     else
     printf("%.2f%%, Allowed",avg);
    return 0;
}
