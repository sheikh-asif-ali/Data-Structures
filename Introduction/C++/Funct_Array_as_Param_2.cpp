#include <iostream>

using namespace std;

int * fun(int size)
{
    int *p;
    p = new int[size];

    for(int i=0;i<size;i++)
    p[i] = i+1;

    return p;
}
int main()  
{
    int *ptr, size = 3; //Size of Array to be created is decided here
    ptr  = fun(size);

    for(int i=0;i<size;i++)
    cout<<ptr[i]<<endl;

    return 0;
}
/* Inside main function there is no array,
function fun is creating an array of given size,
& returning the pointer of that type array,
which is held back in pointer ptr
& main function is using that Array.
*/