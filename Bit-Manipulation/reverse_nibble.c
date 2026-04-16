// Program to swap the nibbles of a byte. A nibble is a group of 4 bits, and a byte consists of 2 nibbles. The program takes an input byte, swaps the two nibbles, and outputs the result.

#include <stdio.h>

int main()
{
    // Input: 0xABCD
    // Output: 0xCDAB
    unsigned int num1 = 0xABCD;
    printf("First Problem is: %X\n", num1);    
    unsigned int rev1 = (((num1 & 0x00FF) <<8 ) | ((num1 & 0xFF00) >> 8));
    printf("Swapped nibbles: %X\n\n", rev1);
    
    //Input: 0xAABBCCDD
    //Output: 0xDDCCBBAA
    unsigned int num2 = 0xAABBCCDD;
    printf("Second Problem is: %X\n", num2);
    unsigned int rev2 = (((num2 & 0x000000FF) << 24) | ((num2 & 0x0000FF00) << 8) | ((num2 & 0x00FF0000) >> 8) | ((num2 & 0xFF000000) >> 24));
    printf("Swapped nibbles: %X\n\n", rev2);

    // Input: 0x1324
    // Output: 0x1234
    unsigned int num3 = 0x1324;
    printf("Third Problem is: %X\n", num3);    
    unsigned int rev3 = (((num3 & 0x00F0) << 4) | ((num3 & 0x0F00) >> 4) | (num3 & 0xF00F));
    printf("Swapped nibbles: %X\n", rev3);
    return 0;
}


