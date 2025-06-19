// Fibonacci sequence: The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
#include <stdio.h>

int fib (int n)
{
    int a=0 , b=1, c, i;
    if(n<=1)
        return n;
    for(i=2; i<=n; i++)
    {
        c = a + b; // Calculate the next Fibonacci number
        a = b;      // Update a to the previous b
        b = c;      // Update b to the current Fibonacci number
    }
    return c; // Return the nth Fibonacci number
}

int rec_fib(int n)
{
    if(n <= 1)
        return n; // Base case: return n if it's 0 or 1
    return rec_fib(n - 2) + rec_fib(n - 1); // Recursive case: sum of the two preceding Fibonacci numbers
}

int F[10]; // Global array to store Fibonacci numbers for memoization
int memo_fib(int n)
{
    if(F[n] != -1) // Check if the value is already computed
        return F[n];
    if(n <= 1)
        return n; // Base case
    F[n] = memo_fib(n - 2) + memo_fib(n - 1); // Store the computed value in the array
    return F[n]; // Return the computed Fibonacci number
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        F[i] = -1; // Initialize the array with -1 to indicate uncomputed values
    }
    int n = 6; // Example input
    
    int result = fib(n); // Using the iterative approach
    int rec_result = rec_fib(n); // Using the recursive approach
    int memo_result = memo_fib(n); // Using the memoization approach
   
    printf("Itterative Fibonacci of %d is %d\n", n, result);
    printf("Recursive Fibonacci of %d is %d\n", n, rec_result);
    printf("Memoization Fibonacci of %d is %d\n", n, memo_result);
    
    return 0;
}