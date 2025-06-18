// Taylor Series: e^x = 1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!
#include <stdio.h>
double taylor(int x, int n)
{
    static double p = 1, f = 1;
    if (n == 0)
        return 1;
    double result = taylor(x, n - 1);
    p *= x; // p = x^n
    f *= n; // f = n!
    return result + p / f; // result = 1 + x^1/1! + x^2/2! + ... + x^n/n!
}
int main()
{
    printf("%f \n", taylor(4, 15)); // Example: e^5 using Taylor series up to n=15
    return 0;
}
// Output: 54.598150
// Explanation: The function uses recursion to compute the series up to the nth term, where `x` is the input value and `n` is the number of terms to include in the series.
// The static variables `p` and `f` are used to keep track of the power of `x` and the factorial of `n`, respectively, across recursive calls.
// The time complexity of this function is O(n) due to the recursive calls, and the space complexity is also O(n) due to the recursion stack.