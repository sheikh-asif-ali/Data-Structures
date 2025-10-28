// Set nth bit of any integer
#include <stdio.h>

int main()
{
    int num=3;  //Binary of 3 is 0000 0011
    int i=1;    //Setting 1st bit
    if(num&(1<<i)!=0)
        printf("%dth/st bit is already set\n", i);
    else
        num = num | (1<<i);
    printf("Number after setting %dth/st bit is %d", i, num);
}