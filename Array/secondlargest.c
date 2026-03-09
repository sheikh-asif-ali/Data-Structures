// 2nd largest element in an array.
#include <stdio.h>
int seclarge(int *A,int n){
    int t1=0,t2=0;
    for(int i=0; i<n; i++)
    {
        if(A[i]>t1)
        {
            t2=t1;
            t1=A[i];
        }
        else if(A[i]>t2 & A[i]!=t1)
        {
            t2 = A[i];
        }
    }
    return t2;
}
int main(){
    int Arr[]={15,3,15,9,13,0};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    printf("%d",seclarge(Arr,n));
    return 0;
}
