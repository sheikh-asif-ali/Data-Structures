// Indirect recursion is a type of recursion in which a function calls another function and that function calls the first function.
#include <stdio.h>
void funB(int n);
void funA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 1)
    {
        printf("%d ", n);
        funA(n / 2);
    }
}
int main()
{
    funA(20);
    return 0;
}
// Output: 20 19 9 8 4 3 1
// In the above code, funA calls funB and funB calls funA. This is called Indirect Recursion.