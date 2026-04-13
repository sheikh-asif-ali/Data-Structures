// Check the endianness of the system
#include <stdio.h>
union{
    int a;
    char x;
}u;

int main()
{
    u.a = 0x01234567;
    
    if(u.x==0x67)   printf("Little Endian");
    else    printf("Big Endian");

    return 0;
}