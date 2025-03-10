#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int len;
    int bred;
};
int main()
{
    //Object of type normal variable is created in Stack.    
    Rectangle r = {10,5};
    cout<<r.len<<endl;  //normal object is accesed with . operator
    cout<<r.bred<<endl<<endl;

    //Object of type pointer variable is created in Stack.
    Rectangle *p = &r;
    cout<<p->len<<endl; //pointer object is accesed with -> operator
    cout<<p->bred<<endl<<endl;

    //Object of type pointer variable is created in Heap as it is dynamic memory allocation.
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p -> len = 100;
    p -> bred = 50;

    cout<<p->len<<endl;
    cout<<p->bred<<endl;

    return 0;
}