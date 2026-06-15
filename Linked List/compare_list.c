#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5

typedef struct Node
{
    int data;
    struct Node *next;
}Node;
bool compareList(Node *head1, Node *head2)
{
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data != head2->data)
            return false;

        head1 = head1->next;
        head2 = head2->next;
    }

    return (head1 == NULL && head2 == NULL);
}
Node* addBefore(Node* head, int new_data)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
    return head;
}
Node* addAfter(Node* head, int new_data)
{
    if(head == NULL)
        return addBefore(head, new_data);
    Node *temp = head;
    Node *new_node = malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;

    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = new_node;
    return head;
}
void printList(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        printf("%d", temp->data);
        if(temp->next != NULL)
            printf(" -> ");
        
        temp = temp->next;
    }
    printf(" -> NULL\n");
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    
    int Arr1[MAX] = {1,2,3,4,5};
    int Arr2[MAX] = {1,2,3,4,9};

    for(int i=0; i<MAX; i++)
        head1 = addAfter(head1, Arr1[i]);
    for(int i=0; i<MAX; i++)
        head2 = addAfter(head2, Arr2[i]);
    printList(head1);
    printList(head2);

    if(compareList(head1, head2))
        printf("\nIdentical Lists");
    else
        printf("\nLists are not Identical");

}
