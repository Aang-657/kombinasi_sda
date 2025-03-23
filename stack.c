#include "stack.h"

Node* createstack(int data){
    return createNode(data);
}
void push(stack *S, Node *NewNode){
    insertAwal(&(*S), NewNode);
}
void pop(stack *S){
    deleteAwal(&(*S));
}

void turnintobinary(LinkedList *Front, LinkedList *Top) {
    if (Front->head == NULL) {
        return;
    }

    int x = Front->head->data; // Ambil data dari node pertama
    Node *temp = Front->head;
    Front->head = Front->head->next; // Pindah ke elemen berikutnya
    free(temp); // Hapus node yang diproses

    while (x > 0) {
        Node *Stck = createNode(x % 2); // Buat node baru dengan sisa bagi 2
        push(Top, Stck);
        x /= 2;
    }
}


void printstack(LinkedList *Top){
        while (Top->head != NULL ){
        printf("%d", Top->head->data);
    }
    printf("\n");
}

void popandprint(LinkedList *Top){
    while (Top->head != NULL ){
        printf("%d", Top->head->data);
        pop(Top);
    }
    printf("\n");
}