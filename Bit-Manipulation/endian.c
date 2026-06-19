// W.A.P. to check whether a system is little/big endian & convert into opposite.
#include <stdio.h>
int main()
{
 int ptr = 0x12345678;
 
 char *num = (char *)&ptr;
 
    if(*num == 78)
    printf("Little Endian\n");
    else
    printf("Big Endian\n");
    
    int swap = ( ((ptr&0xFF000000)>>24) | ((ptr&0x00FF0000)>>8) | ((ptr&0x0000FF00)<<8) | ((ptr&0x000000FF)<<24) );
    
    printf("%X",swap);
    
    return 0;
}
