// Dynamic memory allocation for matrix multiplication in C.

#include <stdio.h>
#include <stdlib.h>

int** defineMatrix(int row, int col){
    int** matrix = malloc(row * sizeof(int*));
    for(int i=0; i<row; i++){
        matrix[i] = malloc(col * sizeof(int));
    }
    return matrix;
}

int main()
{
    int r1,c1,r2,c2;
    int i,j,k;
    
    printf("Enter size of Matrix A as row x coloumn:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter size of Matrix B as row x coloumn:\n");
    scanf("%d %d",&r2,&c2);
    
    if(c1!=r2){
        printf("ERROR! Coloumn1 & Row2 size should be same.");
        return 1;
    }
    
    int** A = defineMatrix(r1,c1);
    int** B = defineMatrix(r2,c2);
    int** C = defineMatrix(r1,c2);
    
    printf("Enter element of Matrix A:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d",&A[i][j]);
        }printf("\n");
    }
    printf("Enter element of Matrix B:\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d",&B[i][j]);
        }printf("\n");
    }
   
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            C[i][j] = 0;
            for(k=0; k<c1; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("Resultant Matrix:\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++)
        printf("%d ", C[i][j]);
    printf("\n");
    }
    return 0;
}
