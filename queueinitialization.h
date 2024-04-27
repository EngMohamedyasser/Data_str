#ifndef _QUEUEINIT_
#define _QUEUEINIT_
#define QueueSize 10


typedef struct
{
int Front;
int Rear;
int element [QueueSize];
}Queue;


void QueueInit(Queue *QueuePtr)
{

    QueuePtr-> Front = -1;
    QueuePtr-> Rear = -1 ;

}
int QueueisFull(Queue *QueuePtr)
{
 if((QueuePtr->Rear+1) && (QueuePtr->Front== QueueSize))
    return 1 ;

    else return  0;


}

int QueueisEmpty(Queue *QueuePtr)
{
return (QueuePtr->Front== -1)&&(QueuePtr->Rear== -1) ? 1 : 0;

}

int Enqueue(Queue *QueuePtr , int ele )
{
if(QueueisFull(QueuePtr)==0)


    {

    if(QueueisEmpty(QueuePtr)==1)
    QueuePtr->Front=QueuePtr->Rear = 0;

    //QueuePtr->Front++;
    QueuePtr->Rear++%QueueSize;

    QueuePtr->element[QueuePtr->Rear]= ele;

    return 1;
    }

    else return 0 ;
}

void Dequeue(Queue *QueuePtr)
{
if(QueueisEmpty(QueuePtr)==0)
    {
    for(int i=QueuePtr->Front ; i>0;i--)
        {


        }



    }
}

void QueueDisplay(Queue *QueuePtr)
{
    for(int i =0 ; i<QueuePtr->Rear-1 ; i++)
        {
        printf("%d = %d \n", i , QueuePtr-> element[i] );

        }
}


#endif // _QUEUEINIT_
