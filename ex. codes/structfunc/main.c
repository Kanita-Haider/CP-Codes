#include <stdio.h>
#include <stdlib.h>
struct student
{
   int id;
   int cse,eee,math,phy;
} ;

//struct student average();

int main()
{
    struct student  *ptr;
      int i;
      double avg=0;

     ptr = (struct student*) malloc(5 * sizeof(struct student));

   for(i = 0; i <5; i++)
   {
         printf("\n ");
      printf("Enter id: ");
      scanf("%d",&(ptr+i)->id);
        printf("\n Enter marks of the subjects as CSE, EEE,MATH,PHYSICS : ");
       scanf("%d%d%d%d", &(ptr+i)->cse,&(ptr+i)->eee,&(ptr+i)->math,&(ptr+i)->phy);
       printf("%d%d%d%d ",  (ptr+i)->cse,(ptr+i)->eee,(ptr+i)->math,(ptr+i)->phy);
       avg= ( ((ptr+i)->cse)+((ptr+i)->eee)+((ptr+i)->math)+((ptr+i)->phy) )/4 ;
      printf(" \n average= %.2lf", avg); 
   }

    return 0;
}
/*struct student average(){
     struct student *ptr;
      int i;

 ptr = (struct student*) malloc(5 * sizeof(struct student));

   for(i = 0; i < 5; ++i)
   {
       printf("Enter id : ");
       scanf(" %d", &(ptr+i)->id);
       printf("Enter marks of the subjects as CSE, EEE,MATH,PHYSICS : ");
       scanf(" %d %d %d %d", &(ptr+i)->cse,&(ptr+i)->eee,&(ptr+i)->math,&(ptr+i)->phy);
       sum= (ptr+i)->cse+(ptr+i)->eee+ (ptr+i)->math+ (ptr+i)->phy;
      avg=sum/4;                                                    
      printf(" average= %d" ,avg);
   }

  return 0;
} */
