#include <stdio.h>
int factorial( int );
int main()
{        
   int number;
    printf("Enter an integer: ");
     scanf("%d",&number);
          printf("%d!=%d",number,factorial( number))   ;
      return 0;
}
int factorial( int number)
{
   int i,f=1 ;
   for(i=1; i<=number ; i++)
   {
       f=f*i ;
    }
        return f;
}
