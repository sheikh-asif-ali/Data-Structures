//User defined sizeof operator

#include <stdio.h>
#define size(var) (char *)(&var+1)-(char *)&var

int main()
{
    short input; //2 byte
    printf("%ld",size(input));
    return 0;
}

