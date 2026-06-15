// Embedded Code for Circular buffer implementation in Microcontroller

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define BUFFER_SIZE    8U
#define BUFFER_MASK    (BUFFER_SIZE - 1U)

#if ((BUFFER_SIZE & BUFFER_MASK) != 0)
#error "BUFFER_SIZE must be a power of 2"
#endif

typedef struct{
    uint8_t data[BUFFER_SIZE];
    volatile uint8_t head;
    volatile uint8_t tail;
}CirBuff;

void init(CirBuff *cb){
    cb->head = 0;
    cb->tail = 0;
}

bool push(CirBuff *cb, uint8_t val){
    uint8_t next = (cb->tail + 1U) & BUFFER_MASK;

    if (next == cb->head)
        return false;          // Full

    cb->data[cb->tail] = val;
    cb->tail = next;

    return true;
}

bool pop(CirBuff *cb, uint8_t *val)
{
    if (cb->head == cb->tail)
        return false;          // Empty

    *val = cb->data[cb->head];
    cb->head = (cb->head + 1U) & BUFFER_MASK;

    return true;
}

void printBuffer(const CirBuff* cb)
{
    uint8_t idx = cb->head;

    printf("\nBuffer: ");
    while(idx != cb->tail)
    {
        printf("%d ", cb->data[idx]);
        idx = (idx + 1U) & BUFFER_MASK;
    }
}

int main(void)
{
    CirBuff cb;
    uint8_t val;

    init(&cb);

    for(int i=1; i<BUFFER_SIZE; i++)
    {
        if(!push(&cb,i))
            printf("\nBuffer full.!! Pop some element first\n");
    }

    printBuffer(&cb);

    if(pop(&cb, &val))
        printf("\nPopped: %d", val);
    else
        printf("\nEmpty Queue.!!");

    printBuffer(&cb);

    if(push(&cb, 99))
        printf("\nPushed: 99");
    else
        printf("\nBuffer full.!! Pop some element first\n");

    printBuffer(&cb);

    if(push(&cb, 69))
        printf("\nPushed: 69");
    else
        printf("\nBuffer full.!! Pop some element first\n");

    return 0;
}
