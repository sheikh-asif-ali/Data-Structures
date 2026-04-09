//Add 2 strings with alternate values and store the result in a new string
#include <stdio.h>
int main()
{
    char Arr1[]="Hlool";
    char Arr2[]="elWrd";
    char Arr3[15];
    int i=0,j=0;
    while(Arr2[i]!='\0')
    {
        Arr3[j++]=Arr1[i];
        Arr3[j++]=Arr2[i];
        i++;
    }
    Arr3[j]='\0';
    printf("%s",Arr3);
    
    return 0;
}
