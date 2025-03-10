#include <iostream>

using namespace std;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a=69,b=96;
    cout<<"Value before Swap a:"<<a<<" b:"<<b<<endl;
    swap(a,b);
    cout<<"Value after a Swap a:"<<a<<" b:"<<b<<endl;
}