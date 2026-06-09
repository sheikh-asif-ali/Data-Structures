// Swap adjacent bits in a given integer
#include <stdio.h>

int swap(int num)
{
    int mask;
    int even = (0x55&num)<<1; 
    int odd = (0xAA&num)>>1;
    return (even|odd);
}
int main()
{
    int num = 0xAA; // A Hexadecimal number (10101010 in binary)
    printf("Original number: 0x%X\n", num);

    // Swap adjacent bits
    num = swap(num);

    printf("Number after swapping adjacent bits: 0x%X\n", num);
    return 0;
}
