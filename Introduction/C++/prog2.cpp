//assignment of integer array using new[] & delete[] operators
#include <iostream>
using namespace std;

int main()
{
   int a = 9;
   int* arr = new int[a]; // Dynamically allocates an array of min integers on the heap
   
   // Set some values in the array
   for (int i = 1; i <= a; i++) {
    arr[i] = i;
    cout<<arr[i]<<endl;
    }
    delete[] arr; // Deallocates the memory assigned to the array

    return 0;
}