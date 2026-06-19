//All basic operations in Array
//Second Largest Element
//Third Largest Element
//Reverse an Array
//Reverse Array in Groups
//Rotate Array
//Three Great Candidates
//Max Consecutive Ones
//Move All Zeroes To End
//Remove Duplicates from Sorted Array
//Alternate Positive Negative
//Missing and Repeating in Array
//Missing Ranges of Numbers
//Sum of all Subarrays

#include <stdio.h>
#include <limits.h>

#define MAX 16

int second_large(int Arr[], int n)
{
    int first = INT_MIN;
    int second= INT_MIN;
    
    for(int i=0; i<n; i++){
        if(Arr[i]>first)
        {
            second = first;
            first = Arr[i];
        }   
        else if(Arr[i]<first && Arr[i]>second)
            second = Arr[i];
    }
    return second;
}
int third_large(int Arr[], int n)
{
    if (n<3)
        return -1;
    int second = second_large(Arr, n);
    int third = INT_MIN;
    
    for(int i=0; i<n; i++){
        if(Arr[i]<second && Arr[i]>third)
            third = Arr[i];
    }
    return third;
}
void reverse(int Arr[], int start, int end)
{
    while(start<end){
        int temp = Arr[start];
        Arr[start++] = Arr[end];
        Arr[end--] = temp;
    }
}
void reverseIngroups(int Arr[], int n, int k)
{
    for(int i=0; i<n; i+=k){
        int left =i;
        int right;
        
        // to handle case when k is not multiple of n
        if(i+k-1<n-1)
            right = i+k-1;
        else
            right = n-1;
        
        while(left<right){
            int temp = Arr[left];
            Arr[left++] = Arr[right];
            Arr[right--] = temp;
        }
    }
}
void rotateArr(int Arr[], int n, int d)
{
    //Reversal Algorithm - O(n) Time and O(1) Space
    
    d %= n; // Handle the case where d > size of array

    reverse(Arr, 0, d-1); // Reverse the first d elements
    reverse(Arr, d, n-1); // Reverse the remaining n-d elements
    reverse(Arr, 0, n-1); // Reverse the entire array
}
int main()
{
    int n; //Array size
    int Array[MAX] = {0}; //Decleration on Array
    int k = 3;  //reverseIngroups of k elements
    int d = 5; //rotateArr by d positions

    printf("NOTE: Max size allowed is %d: ", MAX);
    printf("\nEnter size of the array: ");
    
    if(scanf("%d", &n) != 1){
        printf("\nInvalid Input");
        return 1;
    }

    if(n <= 0 || n > MAX){
        printf("\nInvalid Input");
        return 1;
    }

    printf("\nEnter %d elements:", n);

    for(int i = 0; i < n; i++){
        if(scanf("%d", &Array[i]) != 1){
            printf("\nInvalid Input");
            return 1;
        }
    }

    printf("\nArray elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d", Array[i]);
        printf("|");
    }
    
    // printf("\nSecond largest element is: %d",second_large(Array,n));
    // printf("\nThird largest element is: %d",third_large(Array,n));

    // printf("\nReversed array elements are: "); reverse(Array,0,n);

    // printf("\nArray elements reversed in the group of %d are: ",k); reverseIngroups(Array, n, k);
    
    printf("\nArray elements after rotating by %d positions are: ",d); rotateArr(Array, n, d);
    
    for(int i = 0; i < n; i++){
        printf("%d", Array[i]);
        printf("|");
    }
    return 0;
}
