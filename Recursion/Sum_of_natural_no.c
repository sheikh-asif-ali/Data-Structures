// Sum of n natural numbers using recursion
#include <stdio.h>

int sum(int a) //for recursive approach
{
    if(a==0)
        return 0;
    return sum(a-1)+a;
} 

int Isum(int a) //for iterative approach
{
    int s=0;
    for(int i=1; i<=a; i++)
        s+=i;
    return s;
}

int main()
{
    int n;
    printf("Nth no to be entererd here: ");
    scanf("%d", &n);
    int s = Isum(n);
    printf("Sum of %d natural number is %d",n, s);
    return 0;
}
// Output: Nth no to be entererd here: 5
// Sum of 5 natural number is 15