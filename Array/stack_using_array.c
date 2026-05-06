// Implement Stack using Array

#include <stdio.h>
#define MAX 5

int Stack[MAX];
int top = -1;

void push(int val)
{
    if(top == MAX-1)
    {
        printf("Overflow\n");
        return;
    }
    Stack[++top] = val;
}
int pop()
{
    if(top == -1)
    {
        printf("Underflow\n");
        return -1;
    }
    return Stack[top--];
}
void display()
{
    for(int i=top; i>=0; i--)
    {
        printf("%d",Stack[i]);
        printf("\n");
    }
}
int main()
{
    for(int i=1;i<=MAX;i++)
        push(i);
    display();
    int poped=pop();
    printf("Value poped is: %d\n",poped);
    display();
    return 0;
}
