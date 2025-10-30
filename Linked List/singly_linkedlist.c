// Implement a singly linked list with Insert & Delete operations
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
    if(head == NULL) return insertAtBeg(head, new_data);

   struct node* new_node = (struct node*) malloc(sizeof(struct node));
   struct node* last = head;
   
   new_node->data = new_data;
   new_node->next = NULL;
  
    while (last->next != NULL) last = last->next;
    last->next = new_node;
    return head;
}
struct node* insertAtPos(struct node* head, int new_data, int pos)
{
    if(pos == 0|| head == NULL) return insertAtBeg(head, new_data);

    struct node * new_node = (struct node*) malloc(sizeof(struct node));
    struct node* temp = head;
    new_node->data = new_data;

    for(int i=0; i<pos-1 && temp->next!=NULL; i++) temp = temp->next;
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}
struct node* delFromBeg(struct node* head)
{
    if(head == NULL) return head;

    struct node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
struct node* delFromEnd(struct node* head)
{
    if(head == NULL) return head;
    if(head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct node* last = head;
    while (last->next->next != NULL) last = last->next;
    free(last->next);
    last->next = NULL;
    return head;
}
struct node* delFromPos(struct node* head, int pos)
{
    if(head == NULL) return head;
    if(pos == 0) return delFromBeg(head);

    struct node* temp = head;
    for(int i=0; i<pos-1 && temp->next!=NULL; i++) temp = temp->next;

    if(temp->next == NULL) return head;

    struct node* node_to_delete = temp->next;
    temp->next = temp->next->next;
    free(node_to_delete);
    return head;
}
void printList(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node* head = NULL;
    
    head =  insertAtEnd(head, 2);
    head =  insertAtBeg(head, 1);
    head =  insertAtEnd(head, 4);
    head =  insertAtPos(head, 3, 2);

    printList(head);

    head = delFromBeg(head);
    printf("\nAfter deletion from beginning:\n");
    printList(head);

    head = delFromEnd(head);
    printf("\nAfter deletion from end:\n");
    printList(head);

    head = delFromPos(head, 0);
    printf("\nAfter deletion from position 1:\n");
    printList(head);

    return 0;
}
