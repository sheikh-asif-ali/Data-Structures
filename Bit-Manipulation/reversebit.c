// Reverse a 8 bit binary number

#include <stdio.h>

int main() {
    // The original number, represented in binary as 10101101.
    // In hexadecimal, this is 0xAD. In decimal, it's 173.
    int original_num = 0b10101101;
    printf("Original binary number is: %d\n",original_num);
    int reversed_num = 0;
    int i;
    
    // Loop through each of the 8 bits
    for (i = 0; i < 8; i++) {
        // Step 1: Left shift the result to make space for the next bit
        reversed_num <<= 1;
        
        // Step 2: Check if the LSB of the original number is 1
        if (original_num & 1) {
            // If it is, set the LSB of the reversed number to 1
            reversed_num |= 1;
        }
        
        // Step 3: Right shift the original number to process the next bit
        original_num >>= 1;
    }
   
    // The original binary value was 10101101.
    // The reversed binary is 10110101.
    
    // Print the result.
    printf("Reversed binary number is: ");
     for(i=7;i>=0;i--)
    {
        printf("%d",((reversed_num>>i)&1));
    }
    printf("\n");
    printf("Reversed number (decimal): %d\n", reversed_num);
    printf("Reversed number (hex): 0x%X\n", reversed_num);

    return 0;
}
