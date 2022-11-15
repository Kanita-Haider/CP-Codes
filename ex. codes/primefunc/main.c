#include <stdio.h>
int primeNumber( int );
int main()
{        
   int number;
    printf("Enter a integer\n");
     scanf("%d",&number);
    
      if( (primeNumber(number))==1 )  {
         printf("prime number\n");    }
         else
       printf(" Not prime number\n");   
     return 0;
}
int primeNumber( int number)
{
   int i ;
   for(i=2; i<=number-1 ; i++)
   {
           if(number%i==0)
            return 0;
    }
        return 1;
}
