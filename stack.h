#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef LinkedList stack;

Node* createstack(int data);
void push(stack *S, Node *NewNode);
void pop(stack *S);
void turnintobinary(LinkedList *Front, LinkedList *Top);
void popandprint(LinkedList *Top);
void printstack(stack *S);

#endif