// Reverse a Singly Linked List in C
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* reverseList(struct node* head)
{
    struct node* cur = head, *pre = NULL, *nxt = NULL;

    while(cur != NULL)
    {   
        nxt = cur->next;
        cur->next = pre;
        // Until here cur is head[1], nxt is next node[2], pre is NULL
        pre = cur;
        cur = nxt;
        // Now pre is head[1], cur is next node[2], nxt is also next node[3]
    }
    return pre;
}
struct node* insertAtBeg(struct node* head, int new_data)
{
   struct node* new_node = (struct node*) malloc(sizeof(struct node));

   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
   return head;
}
void printList(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d(%p)-> ", temp->data,temp);
        temp = temp->next;
    }
}
int main()
{
    struct node* head = NULL;
    head =  insertAtBeg(head, 1);
    head =  insertAtBeg(head, 2);
    head =  insertAtBeg(head, 3);
    printf("Original list:\n");
    printList(head);

    head = reverseList(head);
    printf("\nReversed list:\n");
    printList(head);
    
    return 0;
}