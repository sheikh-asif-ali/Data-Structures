#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void printList(struct node *head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node* insertnode(struct node *head, int data)
{
    if(head==NULL)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = data;  //real input data
        new_node->next = head;  //indirectly NULL
        head=new_node;          //new_node is the new head
        return head;            //new_node i.e. 1st element is returned
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node* last = head;
    new_node->data = data;
    new_node->next = NULL;
    
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next = new_node;
    return head;
}

struct node* reverse(struct node* head){
    struct node *prev,*curr,*next;
    prev = next = NULL;
    curr = head;

    while(curr->next != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
    struct node *head=NULL;
    int Arr[] = {1,2,3,4,5};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    for(int i=0;i<n;i++)
    {
        head=insertnode(head, Arr[i]);
    }
    printList(head);    
    head=reverse(head);
    printList(head);

    return 0;
}
