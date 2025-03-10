#include <iostream>

using namespace std;

void fun(int A[],int n)
// void fun(int *A,int n)   //  Pointer can also be used instead of Array
{
    A[0] = 15;  // If we change formal parameter, the actual parameter will change as it is Call by Address
    for(int x=0;x<n;x++)
    cout<<A[x]<<" ";
    cout<<endl;
}
int main()
{
    int A[] = {2,4,6,8,10};
    int n = 5;
 
    fun(A,n);

    for(int x:A)
    cout<<x<<" ";

    return 0;
}