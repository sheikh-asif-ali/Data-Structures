// Combination formula i.e nCr= n! / (r! * (n - r)!)
#include <stdio.h>

int fact (int n)
{
    if(n==0)
        return 1; // Base case: factorial of 0 is 1
    return n * fact(n - 1); // Recursive case: n! = n *
}

int nCr(int n, int r)
{
    int num, den;
    
    num =fact(n); // Calculate n!
    den = fact(r) * fact(n-r); // Calculate r! * (n - r)!
    
    return num / den; // Return the combination value nCr
} 
int NCR( int n, int r)
{
    if(r==0|| n==r)
        return 1; // Base case: nC0 = 1 and nCn = 1
    return NCR(n-1, r-1) + NCR(n-1, r); // Recursive case: nCr = (n-1)C(r-1) + (n-1)Cr
}

int main()
{
    printf("%d \n", nCr(4,2)); // Example: Calculate 4C2
    printf("%d \n", NCR(6,1)); // Example: Calculate 4C2 using recursion
    return 0;
}
// Output: 6
// Explanation: The program calculates combinations using both iterative and recursive methods. 
// The `nCr` function uses factorials to compute combinations, while the `NCR` function uses recursion 
// to achieve the same result without explicitly calculating factorials.