#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
void initalize(struct Rectangle *r,int l,int b)
{
    r->length = l;
    r->breadth = b;
}
int area(struct Rectangle r)
{
    return r.length*r.breadth;
}
int perimeter(Rectangle r)
{
    int p=2*(r.length+r.breadth);
    return p;
}

int main()
{
    Rectangle r={0,0};
    int l,b;
    printf("Enter length & breadth \n");
    cin>>l>>b;

    initalize(&r,l,b);
    int a = area(r);
    int p = perimeter(r);

    cout<<"Area is "<<a<<" Perimeter is "<<p<<endl;

    return 0;
}