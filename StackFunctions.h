#ifndef _STACK_FUNCTION_
#define _STACK_FUNCTION_
#endif // _STACK_FUNCTION_
# define StackSize  10

typedef struct
{
int elements [StackSize];
int top;
} STACK;

int arrread(int size , int arr[]); // to read the array

void StackInit( STACK *StckPtr); // used to initialize the stack before any process

int StackIsFull( STACK *StckPtr); //check if the stack is full
int StackIsEmpty( STACK *StckPtr); // check if the stack is empty
int StackPush(int item , STACK *StckPtr); // add value to the stack
int StackPop(STACK *StckPtr); // remove value from the stack
void StackClear(STACK *StckPtr); // clear the stack
void StackDisplay(STACK *StckPtr); // display the current values in the stack

