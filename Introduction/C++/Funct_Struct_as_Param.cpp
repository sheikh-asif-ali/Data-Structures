#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// Call by Value
void fun(struct Rectangle r)
{
    r.length = 20;
    cout<<"\nCall by Value: Length is "<<r.length<<" &"<<" Breadth is "<<r.breadth<<endl; 
}
// Call by Address
void fun_add(struct Rectangle *p)
{
    p->length = 30;
    cout<<"Call by Address: Length is "<<p->length<<" &"<<" Breadth is "<<p->breadth<<endl; 
}
int main()
{
    Rectangle r = {10,5};   // This is an actual parameter 
    
    cout<<"In Main function:\nLength is "<<r.length<<" &"<<" Breadth is "<<r.breadth<<endl; 
    
    fun(r); // Pass by Value
    fun_add(&r);    //Pass by Address

    cout<<"\nIn Main function after calling all functions:\nLength is "<<r.length<<" &"<<" Breadth is "<<r.breadth<<endl;

    return 0;
}