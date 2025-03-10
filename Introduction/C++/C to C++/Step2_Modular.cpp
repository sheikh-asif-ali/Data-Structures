#include <iostream>
#include <stdio.h>

using namespace std;

int area(int l, int b)
{
    return l*b;
}
int perimeter(int l, int b)
{
    int p=2*(l+b);
    return p;
}

int main()
{
    int l=0,b=0;
    
    cout<<"Enter length & breadth "<<endl;
    cin>>l>>b;

    int a = area(l,b);
    int p = perimeter(l,b);

    cout<<"Area is "<<a<<" Perimeter is 10"<<p<<endl;

    return 0;
}