// Palindrome (without library function)
// Idea: Reverse the number/string manually and compare.
#include <stdio.h>

int main()
{
    int num = 101, rev=0, rem=0;
    int original = num;
    while(num!=0)
    {
        rem = num % 10;
        rev = rev*10+rem;
        num = num/10;
    }
    if(original == rev)
        printf("Pallindrome");
    else
        printf("Not Pallindrome");    
    return 0;
}
