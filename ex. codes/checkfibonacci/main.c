#include <stdio.h>
#include <math.h>

int checkfibonacci(int x){

      int x1,x2,s1,s2;
      x1=5*x*x+4 ;
      s1=(int)sqrt(x1)  ;
       x2=5*x*x-4 ;
       s2=(int)sqrt(x2) ;

      if ((s2==x2*x2)|| (s1==x1*x1)) 
         return 1 ;    
      else
            return 0;  
  }

int main(){
   int n;
  printf(" enter a number ");
  scanf("%d",&n);
  printf("%d",checkfibonacci(n));
  return 0;
    }
