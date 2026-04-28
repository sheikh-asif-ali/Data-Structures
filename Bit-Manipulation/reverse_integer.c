// bit-level reversal of an integer 

#include <stdio.h>
#include <stdlib.h>
unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
    int bits = sizeof(n) * 8;

    for(int i = 0; i < bits; i++)
    {
        if(n & (1U << i))
            rev |= (1U << ((bits - 1) - i));
    }
    return rev;
}
int main()
{
    printf("%u\n", reverseBits(43261596));
    return 0;
}
