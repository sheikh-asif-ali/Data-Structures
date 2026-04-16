// Reverse each word in-place
//Input: who let the dogs out
//Output: ohw tel eth sgod tuo

#include <stdio.h>

void rev(char *str, int l, int r)
{
    char temp;
    while(l<r)
    {
        temp = str[l];
        str[l++] = str[r];
        str[r--] = temp;
    }
}
int main()
{
    char str[] = "who let the dogs out";
    int i,start = 0;
    
    while(1)
    {
        if(str[i]==' '|| str[i]=='\0')
        {
            rev(str, start, i-1);
            start = i+1;
        }
        if(str[i] == '\0')
            break;
    i++;
    }
    printf("%s\n", str);
    return 0;
}

