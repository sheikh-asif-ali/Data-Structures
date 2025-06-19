// Taylor series using Horner's method
#include <stdio.h>

double taylor(int x, int n) // using recursion
{
    static double s;
    if ( n == 0 )
        return s;
    s = 1 + x * s / n;
    return taylor(x, n - 1);
}
double taylor1(int x, int n) // using iteration
{
    double s = 1.0;
    // for (int i = n; i > 0; i--)  //The loop works both ways
    //     s = 1 + x * s / i;
    for( ; n > 0; n--)
        s = 1 + x * s / n;  
    return s;
}
int main()
{
    printf("%lf \n", taylor(1, 10)); // e^1 = e
    printf("%lf \n", taylor1(2, 10)); // e^2 = e^2
    return 0;
}
// Output: 2.718282
//         7.389056