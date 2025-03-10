#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle    //structure defination
{
    int len;
    int bred;
};

int main()
{
    struct Rectangle a;     //structure decleration

    struct Rectangle r = {10,5};    //structure decleration & initialization
    
    r.len = 15;    //member access (using . operator)
    r.bred = 10;

    printf("Area of Rectangle is %d",r.len*r.bred);
}