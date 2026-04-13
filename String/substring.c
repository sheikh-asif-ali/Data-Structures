// Check if a string is substring of another
#include <stdio.h>
#include <string.h>

int findSubstring(char *txt, char *pat)
{
    int n = strlen(txt);
    int m = strlen(pat);
    for(int i=0; i<=n-m; i++)
    {
        int j;
        for(j=0; j<m; j++)
        {
            if(txt[i+j] != pat[j])
                break;
        }
        if(j == m)
            return i;
    }
    return -1;
}
int main()
{
   char txt[] = "maroti is a bitch";
   char pat[] = "a ";
   printf("%d", findSubstring(txt, pat));
   
   return 0;
}