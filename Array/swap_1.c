//Input : Hello123
//Output: olleH123
#include <stdio.h>
int main()
{
    char Arr[] = "Hello123";
    int left = 0, right = 0;
    
    for(int i=0; Arr[i]!='\0'; i++)
    { 
        if ((Arr[i] >= 'A' && Arr[i] <= 'Z') || (Arr[i] >= 'a' && Arr[i] <= 'z'))
            right++;
    }
    right--;
    printf("Left\t Right\n");
    printf("%d\t %d\n",left,right);
    
    while(left<right)
    {
        Arr[left] = Arr[left] ^ Arr[right];
        Arr[right] = Arr[left] ^ Arr[right];
        Arr[left] = Arr[left] ^ Arr[right];
        left++;
        right--;
    }
    printf("%s\n", Arr);
    return 0;
}
