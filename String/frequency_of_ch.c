// Calculate frequency of a given character in a string
#include <stdio.h>

int main()
{
    char str[] = "Maroti is a bitch";
    char ch = 'a';                     //Character to find
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("Frequency of '%c' in the string \"%s\" is: %d\n", ch, str, count);

    return 0;
}