#include <iostream>
using namespace std;

void swap(int& a, int&b)
{
    int temp = a;
    a = b;
    b = temp;
    
}

int main()
{
    int a = 6, b = 9;
    cout<<"Before Swap "<<"a is "<<a<<" b is "<<b<<endl;

    swap(a,b);
    cout<<"After Swap "<<"a is "<<a<<" b is "<<b<<endl;
    
    return 0;
}