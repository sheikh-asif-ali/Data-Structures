// Check if a number is a power of 2
#include <stdio.h> 
#include <stdbool.h>

bool isPowerOfTwo(int x)
{
    return x && !((x & (x - 1)));
}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%u", &num);
    if (isPowerOfTwo(num))
        printf("%d is a power of 2\n", num);
    else
        printf("%d is not a power of 2\n", num);
    return 0;   
}
