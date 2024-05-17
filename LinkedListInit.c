#include <stdio.h>
#include <stdlib.h>
#include "LinkedListFunctions.h"



void printLinkedList(node_t *printedNode){
node_t *tempval=printedNode ;

while(tempval != NULL)
    {
    printf("%d , " , tempval->value);
    tempval= tempval->next;

    }
}

node_t *createNode(int nodeValue) // used to push a new node FROM THE FRONT
{
    node_t *newNodeName = malloc(sizeof(node_t));
    newNodeName->value= nodeValue;
    newNodeName->next=NULL;

    return newNodeName;
}
node_t *findNode(node_t *head , int value)
{
node_t *tempNode = head ;

while(tempNode!=NULL )
    {
    if (tempNode->value==value)
        {

            return tempNode;

        }
        tempNode=tempNode->next;


    }
return NULL;
}


void appendNode(node_t *head , node_t *newNode )
{
node_t *temp = head;

while (temp->next!= NULL )
    {
    temp = temp->next;

    }

    printf(" i got it ");
    temp->next = newNode;

}


node_t *removeNodeFromTheLinkedList(node_t *head,int position)
{
    int i =0 ;
      node_t * temp = head;
      while(i<position-1)
        {
        temp = temp->next;
        i++;
        }
        temp->next = temp->next->next;
return head;
}
node_t *insertToHead(node_t *startingNode ,node_t **head )
{
   startingNode->next=*head;  // pointing the head to the added element to assign it as the first element
    *head=startingNode;
    return startingNode;

}

int getElementFromNode(node_t * head , int elementNum)
{
    node_t * temp = head ;
int counter = 1;
while(counter<elementNum)
    {
    temp= temp->next;
    counter++;
    }
    return temp->value;



}

