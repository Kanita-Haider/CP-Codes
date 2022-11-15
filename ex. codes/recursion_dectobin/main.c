#include <stdio.h>

void printBinary(unsigned int);

int main()
{
   unsigned int number;

   // printf("Enter number to convert to binary: ");
   // scanf("%d", &number);
    
    printBinary(100);
	return 0;
}

void printBinary(unsigned int num)
{
    if (num == 0)
    {
        return ;
    }

    printBinary(num / 2);
    printf("%u", num % 2);
}
