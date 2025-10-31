#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

#define BUFFER_SIZE 8
typedef struct {
uint8_t data [BUFFER_SIZE];
uint8_t head;	// write index
uint8_t tail;	// read index
uint8_t count;	// number of bytes in buffer
} CircularBuffer;

void buffer_init(CircularBuffer *buf)
{
    buf->head = buf->tail = buf->count = 0;
}
bool buffer_write(CircularBuffer *buf, uint8_t value)
{
    if(buf->count == BUFFER_SIZE) return 1;
    
    buf->data[buf->head] = value ;
    buf->head = (buf->head+1)%BUFFER_SIZE;
    buf->count++;
    return 0;
}
bool buffer_read(CircularBuffer *buf, uint8_t *value)
{
    if(buf->count == 0) return 1;
    
    *value = buf->data[buf->tail];
    buf->tail = (buf->tail+1)%BUFFER_SIZE;
    buf->count--;
    return 0;
}

int main()
{
    CircularBuffer buf;
    uint8_t i=0,value,temp;
    
    buffer_init(&buf);
    
    for(i=0;i<BUFFER_SIZE;i++) buffer_write(&buf, i+1);
    
    printf("Buffer before Pop: ");
    for(i=0;i<buf.count;i++) printf("%d->",buf.data[i]);
    
    printf("\nPoped: ");
    buffer_read(&buf, &value);
    printf("%d, ",value);
    
    temp=buf.tail;
    printf("\nRemaining: ");
    for(i=0;i<buf.count;i++)
    {
        printf("%d, ",buf.data[temp]);
        temp=(temp+1)%BUFFER_SIZE;
    }

    return 0;
}