// Factorial with Overflow check
// Write a recursive function uint32_t factorial(uint8_t n). What is the largest value of n that will not cause a uint32_t to overflow?
// How would you handle inputs that would cause an overflow?
#include <stdio.h>
#include <stdint.h>
#define FACT_OVERFLOW 0

uint32_t factorial(uint8_t n)
{
    if (n>12)   // Check for overflow condition
    {
        printf("Overflow: Input exceeds maximum value for uint32_t factorial calculation.\n");
        return FACT_OVERFLOW;
    }
    if (n == 0 || n == 1)   // Check for base case
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);  // Recursive call
    }
}
int main()
{
    printf("%d",factorial(1));  // Example call
    return 0;
}