// This method does not require the input string to be sorted.
// Uses hashing to count occurrences of characters.
// Limitation: Only works for ASCII characters (0-255).

#include <stdio.h>
int main()
{
    char Str[16] = "hheeellooolloo";
    int freq[256] = {0};
    int i;

    for(i = 0; i < 16; i++)
    {
        if(Str[i] == '\0') break;
        freq[Str[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] > 0)
        {
            printf("%c -> %d\n", i, freq[i]);
        }
    }
    return 0;
}
