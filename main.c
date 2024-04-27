
#include <stdio.h>
#include <stdlib.h>

#include "StackFunctions.h"



int main()
{

STACK Stk ;
STACK *StckPtr = &Stk;

/* Initializing the stack  */
StackInit(StckPtr);

/*  adding value to the stack   */
StackPush(8 , StckPtr); // adding value to the stack
StackPush(9 , StckPtr);

/* REMOVING VALUE FROM THE STACK */
StackPush(10 , StckPtr);
StackPop(StckPtr);

/* DISPLAY THE CURRENT VALUES INSIDE THE STACK  */

StackDisplay(StckPtr);



}

