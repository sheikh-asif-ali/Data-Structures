//Counting the number of set bits

#include <stdio.h>
int main()
{
    int num = 9; //Binary of 9 is 0000 1001
    int count = 0;  //To count the number of set bits
    for (int i=8; i>=0;--i)
    {
        if((num&(1<<i))!=0) count++;
    }
    printf("Number of set bits are %d",count);
    return 0;
}