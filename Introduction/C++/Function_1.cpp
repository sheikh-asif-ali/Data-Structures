#include <iostream>

using namespace std;

int add(int a, int b)
{
    int s;
    s = a+b;
    
    return s;
}

int main()
{
    int num1=10, num2=15,sum;
    // cout<<"Enter two numbers to be added "<<endl;
    // cin>>num1>>num2;
    sum = add(num1,num2);
    cout<<"The sum is "<<sum<<endl;

    return 0;
}