#include <stdio.h>
#include <stdlib.h>

void main()
{
    void *ptr;

    ptr = malloc(5 * sizeof(int));

    printf("Insert value in Array\n");

    for(int i=0;i<5;i++)
    {
        scanf("%d",(int *)ptr+i);
    }

    for(int i=0;i<5;i++)
    {
       printf(" %d ", *(int *)(ptr+i));
    }

}