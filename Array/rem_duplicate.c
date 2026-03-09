//Remove duplicates from an array
#include<stdio.h>

int remdup(int A[], int n){
    int j=1;
    for(int i=1;i<n-1;i++){
        if(A[i]!=A[i-1]){
            A[j++]=A[i];
        }
    }
    return j;
}

int main(){
    int Arr[] = {1,1,2,2,2,3,3,3,4,4,5,5,5,5,5};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    
    n = remdup(Arr,n);
    
    for(int i=0;i<n;i++){
        printf("%d ",Arr[i]);
    }
    return 0;
}