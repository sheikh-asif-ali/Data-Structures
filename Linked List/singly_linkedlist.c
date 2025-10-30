// Implement a singly linked list node insertion function in C.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* insertAtBeg(struct node* head, int new_data)
{
   struct node* new_node = (struct node*) malloc(sizeof(struct node));

   new_node -> data  = new_data;
   new_node -> next = head;
   head = new_node;
   return head;
}
struct node* insertAtEnd(struct node* head, int new_data)
{
    if(head == NULL)
    {
        return insertAtBeg(head, new_data);
    }
   struct node* new_node = (struct node*) malloc(sizeof(struct node));
   struct node* last = head;
   
   new_node->data = new_data;
   new_node->next = NULL;
  
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return head;
}

int main()
{
    struct node* head = NULL;
    
    head =  insertAtEnd(head, 7);
    head =  insertAtEnd(head, 9);
    
    printf("Inserted Node is: %d\n", head->next->data);

    return 0;
}
