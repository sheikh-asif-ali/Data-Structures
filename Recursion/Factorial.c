// To calculate factorial of a number using recursion
#include <stdio.h>
int fact(int n)
{
    if (n==0)
        return 1;
    return fact(n-1)*n;
}

int main()
{
    int output=0;
    int input=3;
    output = fact(input);
    printf("Factorial of %d is %d by recursion", input, output);
    return 0;
}
// Output: Factorial of 3 is 6 by recursion