/*
char* str = "abc";  
write a code to replace letter 'b' with 'd' 
*/
#include <stdio.h>

int main()
{
    char *str = "abc";
    // Since str is a pointer to a string literal, we cannot modify it directly.
    // We need to create a modifiable copy of the string.
    char modifiable_str[4]; // Create a modifiable array to hold the string
    // Copy the string literal to the modifiable array
    for (int i = 0; i < 4; i++) {
        modifiable_str[i] = str[i];
    }
    // Replace 'b' with 'd'
    for (int i = 0; i < 4; i++) {
        if (modifiable_str[i] == 'b') {
            modifiable_str[i] = 'd';
        }
    }
    // Print the modified string
    printf("%s\n", modifiable_str);
    
    return 0;
}