#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}List;

List* addBefore(List *head, int new_data)
{
    List* new_node = (List*)malloc(sizeof(List));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
    return head;
}
List* addAfter(List *head, int new_data)
{
    if(head==NULL)
    {
        return addBefore(head, new_data);
    }
    List* new_node = (List*)malloc(sizeof(List));
    List *last = head;
    
    new_node->data = new_data;
    new_node->next = NULL;
    
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next = new_node;
    return head;
}
List* delLast(List* head)
{
    List* last = head;
    while(last->next->next!=NULL)
    {
        last = last->next;
    }
    free(last->next);
    last->next = NULL;
    return head;
}
List* delFirst(List* head)
{
    List* temp;
    temp = head->next;
    free(head);
    return temp;
}
List* reverse_list(List* head)
{
    List *cur = head, *prev = NULL, *nxt = NULL;
    while(cur != NULL)
    {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}
void printList(List *head)
{
    List *temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    List *head = NULL;;
    int Arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    
    // Adding element at last
    for(int i=0;i<n;i++)
    {
        head = addAfter(head, Arr[i]);
    }
    printList(head);

    // Delete first element
    head = delFirst(head);
    printList(head);
    
    // Adding element at first
    head = addBefore(head, 1);
    printList(head);
    
    // Delete last element
    head = delLast(head);
    printList(head);

    // Add element at first
    head = addAfter(head, 7);
    printList(head);
    
    // Reverse the list
    head = reverse_list(head);
    printList(head);
    
    return 0;
}
