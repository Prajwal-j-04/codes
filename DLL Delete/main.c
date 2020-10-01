#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *prev;
   struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;
struct node *current = NULL;

void printList() {
   struct node *ptr = head;

   printf("\n[head] <->");
   while(ptr != NULL) {
      printf(" %d <->",ptr->data);
      ptr = ptr->next;
   }

   printf(" [last]\n");
}

void print_backward() {
   struct node *ptr = last;

   printf("\n[last] <->");
   while(ptr != NULL) {
      printf(" %d <->",ptr->data);
      ptr = ptr->prev;
   }

   printf(" [head]\n");
}

void insert(int data)
{
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->prev = NULL;
   link->next = NULL;
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;

   while(current->next!=NULL)
      current = current->next;
   current->next = link;
   last = link;
   link->prev = current;
}

void remove_data(int data)
 {
   int pos = 0;
   struct node *pre_node;

   if(head==NULL) {
      printf("Linked List not initialized\n");
      return;
   }

   if(head->data == data) {
      if(head->next != NULL) {
         head->next->prev = NULL;
         head = head->next;
         return;
      } else {
         head = NULL;
         printf("List is empty now\n");
         return;
      }
   } else if(head->data != data && head->next == NULL) {
      printf("%d not found in the list\n", data);
      return;
   }

   current = head;

   while(current->next != NULL && current->data != data) {
      pre_node = current;
      current = current->next;
   }

   if(current->data == data) {
      pre_node->next = pre_node->next->next;

      if(pre_node->next != NULL)
        {
         pre_node->next->prev = pre_node;
      } else
         last = pre_node;

      free(current);
   } else
      printf("%d not found in the list.", data);

}

int main()
{
   insert(10);
   insert(20);
   insert(30);
   insert(40);
   insert(50);
   insert(60);

   printList();
   remove_data(20);
   printList();

   return 0;
}
