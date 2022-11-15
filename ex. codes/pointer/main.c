#include <stdio.h>
#include <stdlib.h>
int callByValue(int [ ]);
int callByReference(int  *);

int main()
{
     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int sV = callByValue(a);
     int sR = callByReference(&a[0]);

    printf("The sum callByValue is : %d\n", sV);
    printf("The sum callByReference is : %d \n", sR);
    return 0;
}

int  callByReference (int *ss){
        int i, sum=0;
         for (i=0; i<10; i++)
           sum+=* (ss+i);
         return (sum);
}


int  callByValue (int ss[ ]){
        int i, sum=0;
         for (i=0; i<10; i++)
           sum+=ss[i] ;
         return (sum);
}
