// Tree recursion is a type of recursion in which a function calls itself more than one time.
#include <stdio.h>
void fun (int n)
{
    if(n>0)
    {
        printf("%d ", n);
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    fun(3);
    return 0;
}
// Output: 3 2 1 1 2 1 1