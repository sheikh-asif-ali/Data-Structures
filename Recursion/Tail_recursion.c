// Tail recursion is a special form of recursion where the recursive call is the last thing executed by the function.
// There is no need to keep the record of the previous state.
// The tail recursion is similar to the loop. The tail-recursive functions are faster than non-tail recursive functions.
// The tail recursive functions do not build up the stack.
// The tail recursive functions are easy to optimize by the compiler.

#include <stdio.h>

void fun (int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n-1);
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}
// Output: 3 2 1