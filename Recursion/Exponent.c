// Power function of a number using recursion
#include <stdio.h>

int power_type1(int base, int exp) // O(n)
{
    if (exp == 0)
        return 1;
    return power_type1(base, exp - 1) * base;
}
int power_type2(int base, int exp) // O(log n)
{
    if (exp == 0)
        return 1;
    if (exp % 2 == 0)
        return power_type2(base * base, exp / 2);
    return base * power_type2(base * base, (exp - 1) / 2);    
}

int main()
{
    int result1 = power_type1(2, 4); // 2^4
    int result2 = power_type2(2, 8); // 2^8
    printf("%d", result1);
    printf("\n%d", result2);
    return 0;
}
// Output: 16
// Output: 256
// Explanation: The first function calculates 2^4 using a simple recursive approach, 
// while the second function calculates 2^8 using a more efficient method that reduces the number of multiplications by taking advantage of the properties of exponents.
// The first function has a time complexity of O(n) due to the linear recursion, 
// while the second function has a time complexity of O(log n) due to the logarithmic recursion, making it more efficient for larger exponents.