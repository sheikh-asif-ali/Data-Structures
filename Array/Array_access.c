//Multiples ways to access an array element
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Using index: arr[2] = %d\n", arr[2]);   // Accessing array elements using index

    printf("Using commutative property: 2[arr] = %d\n", 2[arr]);    // Accessing array elements using commutative property

    printf("Using pointer arithmetic: *(arr + 2) = %d\n", *(arr + 2));  // Accessing array elements using pointer arithmetic

    printf("Using pointer arithmetic with commutative property: *(2 + arr) = %d\n", *(2 + arr));      // Accessing array elements using pointer arithmetic with commutative property

    return 0;
}

//Arr[2] == *(Arr+2) == *(2+Arr) == 2[Arr]
//In C, the expression arr[i] is defined as *(arr + i).
//This means that arr[2] is equivalent to *(arr + 2).
//Additionally, due to the commutative property of addition, *(arr + 2) is also equivalent to *(2 + arr), 
//which can be written as 2[arr]. Therefore, all three expressions arr[2], *(arr + 2), and 2[arr] will yield the same result when accessing the third element of the array.