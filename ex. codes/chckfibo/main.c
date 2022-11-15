#include <stdio.h>
#include <math.h>
  int isPerfectSquare(int x)
    {
       int s = (int)sqrt(x); 
       return (s*s == x);
     }  
   int isFibonacci(int x)
      {
         return isPerfectSquare(5*x*x + 4) ||
           isPerfectSquare(5*x*x - 4);
     }
    int main(void)
    {   
     //int n = 12;
	 //int n = 55;
	 int n = 8;
	  if (n>0)
		{	
		 printf("Is %d a Fibonacci number? %d",n, isFibonacci(n)); 
		} 
		return 0;        
   }

