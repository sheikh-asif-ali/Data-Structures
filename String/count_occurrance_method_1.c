//Count occurrence of every character in a string
//Limitation: input must be sorted
#include <stdio.h>
int main()
{
    char Str[] = "heellloooo";
    int i,count=1;
    for(i = 0; Str[i] != '\0'; i++)
    {
        if(Str[i] == Str[i + 1])
            count++;
        else
        {
            printf("%c -> %d\n", Str[i], count);
            count=1;
        }
    }
    return 0;
}
