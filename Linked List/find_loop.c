// A program to find if there is a loop in a linked list and to find the starting node of the loop
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*head = NULL;

struct Node* detectLoopStart()
{
    struct Node *slow = head;
    struct Node *fast = head;
   
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow)
        {
            printf("\nLoop detected");
            slow = head;
            while(slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
   return NULL;
}
void removeLoop(struct Node *loopStart)
{
    if (loopStart == NULL)
        return;
    
    struct Node *temp = loopStart;
    while(temp->next != loopStart)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
void makeLoop()
{    
    struct Node *slow = head;
    struct Node *fast = head;
    while(fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct Node *mid = slow;
    struct Node *temp = head;

    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = mid;
    printf("\nLoop made");
}
void addBefore(int new_data)
{
    struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void addAfter(int new_data)
{
    if(head == NULL)
        return addBefore(new_data);

    struct Node *temp = head;
    struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    
    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = new_node;
}
void printList()
{
    struct Node *temp = head;
    printf("\n");
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    
}

int main()
{
    int Arr[] = {1,2,3,4,5,6};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    for(int i=0; i<n; i++)
        addAfter(Arr[i]);
    printList();
    
    makeLoop();    

    struct Node *loopNode = detectLoopStart();
    if (loopNode != NULL){
        printf("\nLoop starts at node: %d", loopNode->data);    
        removeLoop(loopNode);
        printf("\nLoop removed");
    }
    else
        printf("\nNo loop found");

    printList();

    return 0;
}
