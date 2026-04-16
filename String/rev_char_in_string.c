// Reverse the order of words in a string
// Input: who let the dogs out
// Output: out dogs the let who

#include <stdio.h>
#include <string.h>

void reverse(char *str, int l, int r)
{
    while(l<r)
    {
        char temp = str[l];
        str[l++] = str[r];
        str[r--] = temp;
    }
}
int main()
{
    char str[] = "who let the dogs out";
    int i,start = 0;
    int n = strlen(str);

    // Reverse the entire string
    reverse(str, start, n-1);

    // Reverse each word in the reversed string
    for(i=0; i<=n; i++)
    {
        if(str[i]==' '|| str[i]=='\0')
        {
            reverse(str, start, i-1);
            start = i+1;
        }
    }
    printf("%s\n", str);
    return 0;
}
