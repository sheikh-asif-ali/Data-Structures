// WAP to Dynamically allocate array & remove its repeated elements & save back to the array
// Example set {10,20,30,40,50,10,20,30,40,10,20,30,10,20,10}
#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;
    int n, i, j;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    p = (int*)malloc(n * sizeof(int));

    if(p == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("\nOriginal Array:\n");

    for(i = 0; i < n; i++) {
        printf("%d\t", p[i]);
    }

    // Remove duplicates
    int k = 0;
    for(i=0; i<n; i++){

        int isDuplicate = 0;
        
        for(j=0; j<k; j++){
            if(p[i]==p[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate)
            p[k++] = p[i];
    }

    printf("\n\nArray After Removing Duplicates:\n");

    for(i = 0; i < k; i++) {
        printf("%d\t", p[i]);
    }

    free(p);

    return 0;
}
