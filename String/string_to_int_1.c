//Take 2 interger as a char strings & get the sum of both without using atoi() function
#include <stdio.h>
int str_to_int(char *str)
{
    int n=0;
    while(*str != '\0')
    {
        n = n*10 + (*str - '0');
        str++;
    }
    return n;
}
int main()
{
    char str1[] = "101";
    char str2[] = "202";
    int a = str_to_int(str1);
    int b = str_to_int(str2);
    printf("Summation of %d and %d is %d\n",a,b,a+b);
}