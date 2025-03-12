// Behaviour of static variable in recursion

#include <stdio.h>

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n-1) + x;    // x is not reset to 0 after the function call
    }
    return 0;
}

int main()
{
    int x = 5;
    printf("%d\n", fun(x));
    return 0;
}
// Output: 25