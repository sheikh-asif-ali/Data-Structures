// Find single digit repeated integers without any condition checking

#include <stdio.h>

int main()
{
    int arr[] = {1,1,2,3,3,3,4,7,8,9,9};    
    int hash[10] = {0};  // Hash array to count occurrences of digits 1-9
    
    for(int i=0; i<11; i++)
    {
        hash[arr[i]]++;
    }
    for(int i=1; i<=9; i++)
    {
        printf("%d -> %d\n", i, hash[i]);   // Print the count of each digit from 1 to 9
    }
    return 0;
}