#ifndef queue_h
#define queue_h
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "stack.h"

typedef LinkedList queue;

Node* Createqueue(int data);
void enqueue(queue *q, Node *x);
void dequeue(queue *q);
void printmenu();
void ambilantrian(queue *q, int nomorantrian);
void prosesantrian(queue *q, stack *s);
void cetakantrian(queue *q, int nomorantrian);
bool exitsystem(queue *q, queue *e);
int length (queue *q);

#endif