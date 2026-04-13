//Take 2 interger as a char strings & get the sum of both
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[] = "101";
    char str2[] = "202";
    int a = atoi(str1);
    int b = atoi(str2);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("Sumation of %d and %d is %d",a,b,a+b);
}