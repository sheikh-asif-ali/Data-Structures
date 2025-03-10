// Demonstrate how a func can return a
// pointer to an object created in heap &
// can be accesed by main function.
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle *func()    // function will return a pointer to a structure
{
    struct Rectangle *p;    // Object is created inside func function
    
    // Allocating dynamic memory in heap
    p = new Rectangle;  //using C++ syntax
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));    //using C syntax

    p ->length = 15;
    p ->breadth = 6;

    return p;
}

int main()
{
    struct Rectangle *ptr = func(); // Returning address of structure i.e ptr is pointing to pointer p

    cout<<"Length: "<<ptr->length<<endl<<"Breadth: "<<ptr->breadth<<endl;
    return 0;
}