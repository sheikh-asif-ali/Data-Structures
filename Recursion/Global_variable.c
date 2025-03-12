// Behaviour of global variable in recursion

#include <stdio.h>

int x = 0;  // global variable
int fun(int n)
{
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

    printf("%d\n", fun(x)); // first call, x = 5

    printf("%d\n", fun(x)); // second call, x = 10

    return 0;
}
// Output: 25
//       : 50