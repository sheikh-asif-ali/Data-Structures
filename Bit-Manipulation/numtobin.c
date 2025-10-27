//Printing the binary representation of any Number
#include <stdio.h>

int main()
{
    int num=8;
    for(int i=7;i>=0;i--)
    printf("%d",((num>>i)&1));
    return 0;
}