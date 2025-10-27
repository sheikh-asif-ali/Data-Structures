//Checking if the ith bit is set or not

#include <stdio.h>

int main()
{
    int num=3;  //Binary of 3 is 0000 0011
    int i=3;    //Checking if 3rd bit is set or not
    if((num & (1<<i))!=0)
        printf("Set");
    else
        printf("Not Set");
}