#include <stdio.h>
#include <stdlib.h>

int epic(int n) 
{ 
    int count = 0; 
  
    for (int i = 1;; i++) { 
          int x = i,sum = 0; 

            while (x != 0)
            {
                sum = sum + x % 10; 
                x = x / 10;
            }
   
        if (sum == 17) 
            count++; 
 
        if (count == n) 
            return i; 
    } 
    return 0; 
} 
  
int main() 
{   
    int n;
   scanf("%d",&n);
    printf("%d", epic(n)); 
    return 0; 
} 
