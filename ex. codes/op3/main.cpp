#include <stdio.h>

using namespace std;

int main()
{  int number;
   printf("enter an integer: ");
   scanf("%d", &number);
   //true if number is less than 0
   if (number<0){
        printf("you entered %d. \n", number);
        }
   printf("the if statement is easy. ");

   return 0;
}
