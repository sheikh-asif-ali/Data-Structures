#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Array Size";
    cin>>n;

    int B[n];   //Variable sized Array 

    int A[10]={2,4,6,8,10,12};      

    // for(int i=0;i<10;i++)       //basic for loop
    // {
    //     cout<<A[i]<<endl;
    // }

    for(int x:A)    //for each loop of C+++
    {
        cout<<x<<endl;
    }

    return 0;
}