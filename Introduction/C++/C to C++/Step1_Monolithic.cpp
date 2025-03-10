#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int l=0,b=0;
    
    cout<<"Enter length & breadth "<<endl;
    cin>>l>>b;

    int area=l*b;
    int peri=2*(l+b);

    cout<<"Area is "<<area<<" Perimeter is 10"<<peri<<endl;

    return 0;
}