// To calculate factorial of a number using recursion
#include <stdio.h>
int fact(int n) //recursive function
{
    if (n==0)
        return 1;
    return fact(n-1)*n;
}
int Ifact(int n) //itterative function
{
    int f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int input=3;
    int output1 = fact(input);
    printf("Factorial of %d is %d by recursion", input, output1);
    return 0;

    int output2 = Ifact(input);
    printf("Factorial of %d is %d by itteration", input, output2);
    return 0;
}
// Output: Factorial of 3 is 6 by recursion
//         Factorial of 3 is 6 by itteration