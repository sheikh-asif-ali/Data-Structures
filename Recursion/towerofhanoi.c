// Tower of Hanoi problem solution in C
#include <stdio.h>

void TOH(int n, int A, int B, int C)
{
    static int count = 0; // Static variable to keep track of the number of moves
    if(n>0)
    {
    TOH(n-1, A, C, B); // Move n-1 disks from A to C using B as auxiliary
    count++; // Increment the move count
    printf("Step %d: Move disk %d from rod %d to rod %d\n",count, n, A, C); // Move nth disk from A to C
    TOH(n-1, B, A, C); // Move n-1 disks from B to C using A as auxiliary
    }
}
void main()
{
    TOH(4, 1, 2 ,3); // Example: Move 3 disks from rod 1 to rod 3 using rod 2 as auxiliary
}