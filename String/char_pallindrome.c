// Palindrome (without library function)
// Idea: Reverse the number/string manually and compare.
#include <stdio.h>

int main()
{
    char str[] = "abcba"; 
    int len = 0;
    while(str[len] != '\0')
        len++;
    
    int i=0, j=len-1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            printf("Not Pallindrome");
            return 0;
        }
        i++;
        j--;
    }
    printf("Pallindrome");
    return 0;
}
