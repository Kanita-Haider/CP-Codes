#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* p;
    char i ;
    p= ( char*) malloc(10 * sizeof(char))  ;
   
printf("Enter elements: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%c", p + i);
    }
for(i = 0; i < 10; i++)
    {
        printf(" Location of %C=%p \n ", *(p+i),(p + i));
        printf("ASCII value of %c = %d \n", *(p+i),*(p+i) );
    }
    return 0;
}
