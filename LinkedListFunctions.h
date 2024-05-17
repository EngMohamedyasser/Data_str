#ifndef _LINKEDLISTFUNCTION_
#define  _LINKEDLISTFUNCTION_
#include "stdio.h"
#define LLSize 10

typedef struct node
{
int value;
struct node * next ;

};
typedef struct node node_t ;

Node* append(Node*,int);

int getLength (Node*);

int getElement(Node*,int, int*);

Node* deleteFirstNode(Node*);

int delete_Node(Node* , int);

Node *insertFirst(Node* , int);

int insert_after(Node* , int , int);



#endif // _LINKEDLISTFUNCTION_
