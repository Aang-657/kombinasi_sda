// list.h (Header File)
#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
} LinkedList;

void initList(LinkedList *list);
Node* createNode(int data);
void insertAfter(Node *prevNode, Node *newNode);
void insertAwal(LinkedList *list, Node *newNode);
void insertLast(LinkedList *list, Node *newNode);
void insertBetween(LinkedList *list, Node *newNode);
void insertAfterBetween(LinkedList *list, Node *newNode);
void insertBeforeBetween(LinkedList *list, Node *newNode);
void insertAfterValue(LinkedList *list, int target, Node *newNode);
void insertBeforeValue(LinkedList *list, int target, Node *newNode);
void deleteAwal(LinkedList *list);
void deleteLast(LinkedList *list);
void deleteBetween(LinkedList *list);
void deleteAfterBetween(LinkedList *list);
void deleteBeforeBetween(LinkedList *list);
void deleteAfterValue(LinkedList *list, int target);
void deleteBeforeValue(LinkedList *list, int target);
void deleteAll(LinkedList *list);
void modifyBetween(LinkedList *list, int newData);
void modifyAfterBetween(LinkedList *list, int newData);
void modifyBeforeBetween(LinkedList *list, int newData);
void modifyFirst(LinkedList *list, int newData);
void modifyLast(LinkedList *list, int newData);
void modifyAfterValue(LinkedList *list, int target, int newData);
void modifyBeforeValue(LinkedList *list, int target, int newData);
void printList(LinkedList *list);

#endif