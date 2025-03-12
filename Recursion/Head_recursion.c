// In Head recursion the recursive call is the first thing executed by the function.
// The head recursion is similar to the loop.
// The head recursive functions build up the stack.
// The head recursive functions are not easy to optimize by the compiler.

#include <stdio.h>

void fun (int n)
{
    if (n > 0)
    {
        fun(n-1);
        printf("%d ", n);
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}
// Output: 1 2 3