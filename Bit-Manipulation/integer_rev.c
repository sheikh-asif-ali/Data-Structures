// Reverse the bits in an integer

#include <stdio.h>

void displayBits(int x)
{
    for(int i=31; i>=0; i--)
    {
        int mask = 1<<i;
        putchar((x&mask)?'1':'0');
        if(i%8==0)
            putchar(' ');
    }printf("\n");
    
}

unsigned int reverse(unsigned int num)
{
    int i=0, rev=0;
    for(i=0; i<32; i++)
    {
        if(num&(1<<i))
            rev|=1<<(31-i);
    }
    return rev;
}
int main()
{
    unsigned int x = 15;
    displayBits(x);
    displayBits(reverse(x));
    
    return 0;
}
