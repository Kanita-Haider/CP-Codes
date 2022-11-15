# include <stdio.h>
# include <stdbool.h>
# include <math.h>

static void getPrimeNumbers(int upperLimit, bool*primeNumberFlags);
 static void printMersennePrimes(int upperLimit)  ;

int main()
{ 
     int upperLimit;
printf("Input an upper limit \n")  ;
scanf("%d",&upperLimit) ;
printf("Mersenne prime numbers are; \n");
printMersennePrimes(upperLimit);
  return 0 ;
}
static void getPrimeNumbers(int upperLimit, bool*primeNumberFlags)
{
for(int naturalNumber=0; naturalNumber<=upperLimit; naturalNumber++)
     {
primeNumberFlags[naturalNumber]  = true;
     }
for(int power=2; power*power<=upperLimit;power++)
     {
        if(primeNumberFlags[power]==true)
         {
             for(int i=power*2; i<= upperLimit; i+=power)
                 {
                     primeNumberFlags[i]=false;
                 }
        }
     }  
}
 static void printMersennePrimes(int upperLimit)  
{
bool mersennePrimeFlags[upperLimit+1]  ;
long long    mersennePrime = 0;
getPrimeNumbers(upperLimit,mersennePrimeFlags)  ;
for(int naturalNumber=2; mersennePrime<= upperLimit;naturalNumber++)
     {
          mersennePrime =((1<<naturalNumber)-1);
         if(mersennePrimeFlags[mersennePrime])
             {
                 printf(" %lli ",mersennePrime) ;
             }
     }
}
