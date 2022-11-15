#include <stdio.h>
#include <stdlib.h>
 struct node{
       int data;
      struct node * next;
    };
     struct node *head = NULL;
   struct node *second = NULL;

   void printList(struct  node * start) {
   while(start != NULL) {
      printf("%d ",start->data);
      start = start->next;
        }
  }
void insert( int data) {

   struct node *input = (struct node*) malloc(sizeof(struct node));
   input->data = data;
   input->next = head;
   head = input;
}

void sort() {
   int i, j,  tempData;
   struct node *next;

 for ( i = 0 ; i < 4 ; i++) {
      second = head;
      next = head->next;

      for ( j = 1 ; j < 5 ; j++ ) {   

         if ( second->data > next->data ) {
            tempData = second->data;
            second->data = next->data;
            next->data = tempData;
         }
         second = second->next;
         next = next->next;
      }
   }   
}

int main()
{
    insert(60);
   insert(40);
   insert(87);
   insert(25);
   insert(35);

   printf("Entered List: "); 
   printList(head);

   sort();
    printf("\n ");
   printf("Sorted list ");
   printList(head);
    return 0;
}
