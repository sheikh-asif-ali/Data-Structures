// Implement a circular buffer with basic operations
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 8

typedef struct CircularBuffer{
    int Array[BUFFER_SIZE];
    int head, tail, count;
}CirBuff;

bool Buff_Init(CirBuff* buffer) {
    buffer->head = 0;
    buffer->tail = 0;
    buffer->count = 0;
}
bool Buff_Push(CirBuff* buffer, int val)
{
    if(buffer->count == BUFFER_SIZE) return 1; 

    buffer->Array[buffer->head] = val;
    buffer->head = (buffer->head + 1) % BUFFER_SIZE;
    buffer->count++;
    return 0;
}
bool Buff_Pop(CirBuff* buffer, int* val)
{
    if(buffer->count == 0) return 1;

    *val = buffer->Array[buffer->tail];
    buffer->tail = (buffer->tail + 1) % BUFFER_SIZE;
    buffer->count--;
    return 0;
}
int main() {
    CirBuff cb;
    int i, val=8;

    Buff_Init(&cb);
    for(i=0; i<BUFFER_SIZE; i++) Buff_Push(&cb, i);

    printf("Buffer contents before PoP:\n");
    for(i=0; i<BUFFER_SIZE; i++) printf("%d ", cb.Array[i]);

    Buff_Pop(&cb, &val);
    printf("\nPopped value: %d", val);
    Buff_Pop(&cb, &val);
    printf("\nPopped value: %d", val);

    printf("\nRemaining value: ");
    for(i=0; i<BUFFER_SIZE; i++) {
        Buff_Pop(&cb, &val);
        printf("%d, ", val);
    }

    return 0;
}