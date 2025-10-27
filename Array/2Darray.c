//2D array allocation methods
#include <stdio.h>
#include <stdlib.h>

int main(){
    //1st method
    //Array is created in stack memory and memory is also allocated in stack
    int A[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    //2nd method
    //Array is created in stack memory but memory is allocated in heap
    int *B[3];
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));

    //3rd method
    //Array is created in heap memory and memory is also allocated in heap
    int **C;
    //Array for rows
    C = (int **)malloc(3 * sizeof(int *));
    //Array for columns
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    //We have element in array A only, so we will print it
    printf("Elements of 2D array:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}