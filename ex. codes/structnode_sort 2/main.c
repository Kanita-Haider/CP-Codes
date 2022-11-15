#include <stdio.h>
#include <stdlib.h>
 struct node{
       int data;
      struct node * next;
    };
     struct node *head = NULL;
   struct node *second = NULL;
      // struct node *next;

   void printList(struct  node * start) {
   while(start != NULL) {
      printf("%d ",start->data);
      start = start->next;
        }
  }
    struct node * insert(struct node *head, int data) {

   struct node *input = (struct node*) malloc(sizeof(struct node));
   input->data = data;
   input->next = head;
   head = input;
    return  input;
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
    head=insert(head,60);
   head=insert(head,40);            
   head=insert(head,87);
   head=insert(head,25);
   head=insert(head,35);

   printf("Entered List: "); 
   printList(head);

   sort();
    printf("\n ");
   printf("Sorted list ");
   printList(head);
    return 0;
}

