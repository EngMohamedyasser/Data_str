#ifndef _QUEUEINIT_
#define _QUEUEINIT_
#include"QueuekFunctions.h"
#include <stdio.h>
#include <stdlib.h>


void QueueInit(Queue *QueuePtr)  //QUEUE_INIT
{

    QueuePtr-> Front = -1;
    QueuePtr-> Rear = -1 ;

}
int QueueisFull(Queue *QueuePtr) // CHECK IF THE QUEUE IS FULL
{
 if((QueuePtr->Rear+1) && (QueuePtr->Front== QueueSize))
    return 1 ;

    else return  0;


}

int QueueisEmpty(Queue *QueuePtr) // CHECK IF THE QUEUE IS EMPTY
{
return (QueuePtr->Front== -1)&&(QueuePtr->Rear== -1) ? 1 : 0;

}

int Enqueue(Queue *QueuePtr , int ele ) // INSERT VALUE TO THE QUEUE
{
if(QueueisFull(QueuePtr)==0)


    {

    if(QueueisEmpty(QueuePtr)==1){
    QueuePtr->Front=QueuePtr->Rear = 0;
    QueuePtr->element[QueuePtr->Rear]= ele;
    }
    else{

    QueuePtr->element[QueuePtr->Rear++]= ele;

    }

    return 1;
    }

    else return 0 ;
}

void Dequeue(Queue *QueuePtr)  // REMOVE VALUE FROM THE QUEUE
{
if(QueueisEmpty(QueuePtr)==0)
    {

        QueuePtr->Front++;
    }
}

void QueueDisplay(Queue *QueuePtr) // DISPLAY THE CURRENT VALUES IN THE QUEUE
{
    for(int i =QueuePtr->Front ; i<QueuePtr->Rear ; i++)
        {
        printf("%d = %d \n", i , QueuePtr-> element[i] );

        }
}


#endif // _QUEUEINIT_
