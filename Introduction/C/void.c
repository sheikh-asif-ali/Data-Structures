#include<stdio.h>

void main()
{
    void *ptr;

    int i = 420;
    float f = 1714.69;

    ptr = &i;
    printf("Value of i is %d\n",*(int*)ptr);

    ptr = &f;
    printf("Value of f is %f",*(float*) ptr);
}