// Toggle the nth bit of a 32bit integer
#include <stdio.h>

int main()
{
    unsigned int num, n;
    printf("Enter a 32bit integer: ");
    scanf("%u", &num);
    printf("Enter the bit position to toggle (0-31): ");
    scanf("%u", &n);

    num ^= (1 << n);
    printf("Number after toggling the %u-th bit: %u\n", n, num);
    return 0;
    
}