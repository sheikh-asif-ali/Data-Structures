// Check if a number is a power of 2
#include <stdio.h> 
#include <stdbool.h>

bool isPowerOfTwo(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}
int main()
{
    int num = 16;   // example number
    if (isPowerOfTwo(num))
        printf("%d is a power of 2.\n", num);
    else
        printf("%d is not a power of 2.\n", num);
    return 0;   
}
