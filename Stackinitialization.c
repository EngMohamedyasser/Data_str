#ifndef _STACKINIT_
#define _STACKINIT_
#include "StackFunctions.h"
#include <stdio.h>
#include <stdlib.h>
/*

I************ MPLEMENTING ALL THE FUNCTIONS OF THE STACK **********************



*/
int arrread(int size , int arr[])
{
    float sum=0;
    for (int i=0;i<size;i++)
        {
        sum+=arr[i];

        }
        return sum/ size ;

}
void StackInit( STACK *StckPtr)
{
    StckPtr->top=-1;
}
int StackIsFull( STACK *StckPtr)
{
    return StckPtr ->top ==StackSize-1 ? 1 : 0 ;
}
int StackIsEmpty( STACK *StckPtr)
{
    return StckPtr ->top ==-1 ? 1 : 0 ;
}
int StackPush(int item , STACK *StckPtr)
{
    if (StackIsFull(StckPtr)==0)
        {
        StckPtr ->top++;
        StckPtr ->elements[StckPtr->top]=item;
        return 1;
        }
        else return 0 ;
}
int StackPop(STACK *StckPtr)
{
if (StackIsEmpty(StckPtr)==0)
{
 StckPtr->top--;
 return 1;
}
else return 0 ;
}

void StackClear(STACK *StckPtr)
{
StckPtr->top == -1;
}
int stackSize (STACK *StckPtr)
{
if (StackIsEmpty(StckPtr)==1){return 0;}
else
    {
   return StckPtr->top + 1;

    }




    }
void StackDisplay(STACK *StckPtr)
{

for(int i=0; i<StckPtr->top+1;i++)
{
    printf("element %d = %d \n ", i, StckPtr->elements[i]);
}
}










#endif // _STACKINIT_
