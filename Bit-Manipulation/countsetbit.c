// Counting the number of set bits

#include <stdio.h>

int hammingWeight(int n) 
{ 
    int count=0; 
    while(n) 
    { 
        n &= n-1;
        count++; 
    } 
    return count; 
}
int main()
{
    int n = 15; // Example number
    int count = hammingWeight(n);
    printf("Number of set bits are %d",count);
    return 0;
}