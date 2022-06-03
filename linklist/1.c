#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void linklistTraversal (struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr= ptr->next;
    }
    
}

int main()
{
   struct Node  *head;
   struct Node  *second;
   struct Node  *third;
  
  // allocate memory in heap

   head= (struct Node *)malloc(sizeof(struct Node));
   second = (struct Node *)malloc(sizeof(struct Node));
   third = (struct Node *)malloc(sizeof(struct Node));

   // link 1st and 2nd node

   head ->data=7;
   head ->next=second;
   // link 1st and 2nd node

   second ->data=11;
   second ->next=third; 
   // link 1st and 2nd node

   third ->data=15;
   third ->next=NULL;

   linklistTraversal(head);

   return 0;

}