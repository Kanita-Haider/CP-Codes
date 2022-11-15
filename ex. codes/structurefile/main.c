#include <stdio.h>
#include <stdlib.h>
 #include <string.h>
struct Bookinfo
{
char tittle[99 ];
char name[ 49];
unsigned price[50] ;
}cat[];

int main()
{
    int n;
   struct Bookinfo num;
   FILE *fptr;

   if ((fptr = fopen("E:\\bookinfo.bin","wb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
    
    int i, top=0;
   int temp ;
  for(i=top; i<3; i++){
     printf("\n enter tittle : ");
    gets(cat[i].tittle);
     printf("\n enter name : ");
     gets(cat[i].name);  
      printf("\n enter price : ");
        gets(temp);  
     fwrite(&cat, sizeof(struct Bookinfo), 1, fptr);
     }
      top= i;
     
     fclose(fptr);
    return 0;
}
