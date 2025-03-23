/*
#include "list.h"
#include "queue.h"
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

*/


#include <stdio.h>
#include "stack.h"
#include "queue.h"

int main() {
    queue q;
    stack s;
    int y;
    initList(&q);
    initList(&s);

    int pilihan;
    do {
        printf("\nMenu:\n");
        printf("1. input angka\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:            
            printf("Masukkan nilai(0-100): ");
            scanf("%d", &y);
                ambilantrian(&q, y);
                break;
            case 2:
                if (q.head == NULL) {
                    printf("Antrian kosong! Tidak ada yang bisa diproses.\n");
                } else {
                    prosesantrian(&q, &s);
                }
                break;
            case 3:
                cetakantrian(&q, 0);
                break;
            case 4:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid, coba lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}


/*
int main(){
    int x;
    int nomorantrian = 0;
    queue Front;
    stack Top;
    bool isrunning = true;

    initList(&Front);
    initList(&Top);

    while (isrunning){
        printmenu();
        printf("Masukkan input: ");
        scanf("%d", &x);

        switch (x)
        {
        case  1:
            int y;
            printf("Masukkan nilai(0-100): ");
            scanf("%d", &y);
            ambilantrian(Front, y);
            break;
        case 2:
            prosesantrian(Front, Top);
            break;
        case 3:
            cetakantrian(Front, x);

        default:
            break;
        }
    }
}

//////

void ambil_antrian(queue *teller1, int *nomorantrian) {
    (*nomorantrian)++;
    int len1 = length(teller1);
    printf("Antrian masuk ke data nilai\n");
    ambilantrian(teller1, *nomorantrian);

}

void proses_atau_cek(queue *teller1, queue *teller2, int x) {
    int x;
    printf("Pilih(1 atau 2): ");
    scanf("%d", &x);

    if (x == 1) {
        printf("data nilai: ");
        if (x == 2) turnintobinary();
        else cetakantrian(teller1, x);
    } else if (teller == 2) {
        else cetakantrian(teller2, x);
    } else {
        printf("Input tidak valid ...\n");
    }
}

int main() {
    int x;
    int nomorantrian = 0;
    queue teller1;
    stack teller2;
    bool isrunning = true;

    initList(&teller1);
    initList(&teller2);

    while (isrunning) {
        printmenu();
        printf("Masukkan input: ");
        scanf("%d", &x);

        switch (x) {
            case 1:
                ambil_antrian(&teller1, &teller2, &nomorantrian);
                break;
            case 2:
            case 3:
                proses_atau_cek(&teller1, &teller2, x);
                break;
            case 4:
                isrunning = exitsystem(&teller1, &teller2);
                break;
            default:
                printf("Input tidak valid\n");
        }
    }
    return 0;
}
*/