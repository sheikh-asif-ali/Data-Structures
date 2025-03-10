#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;

void initalize(int l,int b)
{
    length = l;
    breadth = b;
}
int area()
{
    return length*breadth;
}
int perimeter()
{
    int p=2*(length+breadth);
    return p;
}
};

int main()
{
    Rectangle r={0,0};
    int l,b;
    printf("Enter length & breadth \n");
    cin>>l>>b;

    r.initalize(l,b);
    int a = r.area();
    int p = r.perimeter();

    cout<<"Area is "<<a<<" Perimeter is "<<p<<endl;

    return 0;
}