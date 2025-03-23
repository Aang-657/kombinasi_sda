#include "queue.h"

//sint nomorantrian = 0;

Node* Createqueue(int data){
    return createNode(data);
}

void enqueue(queue *q, Node *x){
    insertLast(&(*q), x);
}

void dequeue(queue *q){
    deleteAwal(&(*q));
}

void ambilantrian(queue *q, int nomorantrian){
    //nomorantrian =+ 1;
    Node *NewNode = Createqueue(nomorantrian);
    enqueue(q, NewNode);
    cetakantrian(q, nomorantrian);
}

void prosesantrian(queue *q, stack *s) {
    if (q->head == NULL) {
        printf("Queue kosong, tidak ada yang bisa diproses!\n");
        return;
    }

    turnintobinary(q, s);
    printf("Nilai dalam antrian setelah diproses:\n");
    cetakantrian(q, 0);
    printf("Hasil biner:\n");
    popandprint(s);
}


void cetakantrian(queue *q, int nomorantrian){
    printList(q);
    printf("\n");
}

bool exitsystem(queue *q, queue *e){
    deleteAll(q);
    deleteAll(e);
    return false;
}

void printmenu(){
    printf("--------------------\n");
    printf("|                  |\n");
    printf("|1. masukan nilai  |\n");
    printf("|2. proses nilai   |\n");
    printf("|3. cek antrian    |\n");
    printf("|4. exit system    |\n");
    printf("|                  |\n");
    printf("--------------------\n");
}

int length (queue *q){
    int count = 0;
    Node *temp = q->head;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}