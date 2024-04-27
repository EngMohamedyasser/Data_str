#ifndef _QUEUEFUNCTION_
#define _QUEUEFUNCTION_
#define QueueSize 10




typedef struct
{
int Front;
int Rear;
int element [QueueSize];
}Queue;


void QueueInit(Queue *QueuePtr);

int QueueisFull(Queue *QueuePtr);

int QueueisEmpty(Queue *QueuePtr);

int Enqueue(Queue *QueuePtr , int ele );

void Dequeue(Queue *QueuePtr);

void QueueDisplay(Queue *QueuePtr);


#endif // _QUEUEINIT_
