// Make a linked list & split it into perfect half

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}List;

void printList(List *head)
{
    List *temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

List *addBefore(List *head, int data)
{
    List *new_node = (List *)malloc(sizeof(List));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    return head;
}

List *addAfter(List *head, int data)
{
    if(head == NULL)
        return addBefore(head,data);
    List *new_node = (List *)malloc(sizeof(List));
    List *last = head;
    
    new_node->data = data;
    new_node->next = NULL;
    
    while(last->next!=NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return head;
}

List *splitList(List *head)
{
    List *temp = head; List *fast = head; List *slow = head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    List *mid = slow;
    
    while(temp->next!=mid)
        temp = temp->next;
        
    temp->next = NULL;
    
    printList(head);
    
    return mid;
}

int main()
{
    List *head = NULL, *mid = NULL;
    int i=0, A[5] = {2,3,4,5,6};
    
    head = addAfter(head,1);
    printList(head);
    
    for(i=0; i<5; i++)
        head = addAfter(head,A[i]);
    printList(head);
    
    mid = splitList(head);
    printList(mid);
    
}
