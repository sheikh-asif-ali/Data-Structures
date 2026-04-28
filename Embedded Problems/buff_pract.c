#include <stdio.h>
#include <stdbool.h>

#define BUFFER_SIZE 8

typedef struct {
    int data[BUFFER_SIZE];
    int head;  // read
    int tail;  // write
    int count;
} CirBuff;

void init(CirBuff* cb)
{
    cb->head = cb->tail = cb->count = 0;
}

bool push(CirBuff* cb, int val)
{
    if(cb->count == BUFFER_SIZE)
    {
        printf("Buffer Full\n");
        return false;
    }
    cb->data[cb->tail] = val;
    cb->tail = (cb->tail + 1) % BUFFER_SIZE;
    cb->count++;

    return true;
}

bool pop(CirBuff* cb, int *val)
{
    if(cb->count == 0)
        return false;

    *val = cb->data[cb->head];
    cb->head = (cb->head + 1) % BUFFER_SIZE;
    cb->count--;

    return true;
}

void printBuffer(CirBuff *cb)
{
    int i, idx = cb->head;

    for(i = 0; i < cb->count; i++)
    {
        printf("%d-", cb->data[idx]);
        idx = (idx + 1) % BUFFER_SIZE;
    }
    printf("\n");
}

int main()
{
    CirBuff cb;
    int val, i;

    init(&cb);

    for(i = 1; i <= BUFFER_SIZE; i++)
        push(&cb, i);

    printBuffer(&cb);

    pop(&cb, &val);
    printf("Popped: %d\n", val);

    printBuffer(&cb);

    return 0;
}
