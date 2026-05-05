// Count occurances of single digit integers in an array without any condition checking

#include <stdio.h>

int main()
{
    int arr[] = {1,1,2,3,3,3,4,7,8,9,9};
    int n = 11;

    for(int i = 0; i < n; i++)
    {
        int idx = arr[i] % 10;
        arr[idx] += 10;
    }

    for(int i = 1; i <= 9; i++)
    {
        printf("%d -> %d\n", i, arr[i] / 10);
    }

    return 0;
}