#include <stdio.h>
#include <stdlib.h>

int reverse(int x)
{
    int rev=0;
    for(int i=0; i<8; i++)
    {
        rev = rev<<1;
        rev |= (x&1);
        x = x>>1;
    }
    return rev;
}
int swap(int x)
{
    int even = (0x55 & x) << 1;
    int odd = (0xAA & x) >> 1;
    return (even|odd);
}
int countbit(int x)
{
    int count=0;
    while(x)
    {
        x&=x-1;
        count++;
    }
    return count;    
}
int setbit(int x, int bit)
{
    int mask = (1<<bit);
    x = x|mask;
    return x;    
}
int toggle(int x, int bit)
{
    int mask = (1<<bit);
    x = x^mask;
    return x;
}
int convertDec(char binary[])
{
    int i=0, decimal = 0;

    while(binary[i] != '\0')
    {
        char bit = binary[i];
        if(bit == '0')
            decimal = (decimal<<1);
        else if(bit == '1')
            decimal = (decimal<<1) + 1;
        else
            break;
        i++;
    }
    return decimal;
}
int main(){
    unsigned int num = 0xAA;
    printf("%X\n",num);

    int res = swap(num);
    printf("\nResult: %X", res);
 
/*
    unsigned int swap = ( ((num&0xFF00)>>8) | ((num&0x00FF)<<8) );
    printf("%X\n",swap);
*/
/*
    char bin_val[] = "1011";
    int dec_val = convertDec(bin_val);
    printf("Decimal Value: %d",dec_val);
*/
    return 0;
}
