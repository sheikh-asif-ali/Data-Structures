// A recursive function will pass parameter as a recursive call. This is called nested recursion.
#include <stdio.h>

int fun(int n)
{
    if (n > 100)
        return n - 1;
    return fun(fun(n + 11));
}

int main()
{ 
    int r;
    r=fun(99);
    printf("%d\n", r);

    return 0;
}