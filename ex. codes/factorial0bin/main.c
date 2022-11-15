#include <stdio.h> 
 int n; 
// function to find factorial of given number 
 void zero(unsigned int num)
{
    int  count=0;


    while(!(num & 1))
    {
        count++;
        num >>= 1;
    }
    //printf("%n") ;
    printf(" \n number of zeros at end of binary = %d.", count);


}

 void printBinary(unsigned int num)
{     


    if (num == 0)
    {
        return ;
    }

    printBinary(num / 2);
    printf("%u ", num % 2);
     
}  

int factorial( int number)
{
   int i,f=1 ;
   for(i=1; i<=number ; i++)
   {
       f=f*i ;
    }
     printf("%d \n",f);
     printBinary(f);
     zero(f);
        return f;
}

  
int main() 
{ 
    int num ;
    printf("enter an integer: ") ;
    scanf("%d",&num);
    //printf("Factorial of %d is %u", num, factorial(num)); 
    factorial(num);
    return 0; 
} 
