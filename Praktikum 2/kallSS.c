//Nama File         : kallSS.c
//Deskripsi         : Membuat program untuk melakukan operasi aritmatika sederhana
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Rabu, 1 Maret 2023, 09:17

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    char op;
    int iA, iB;

    //Algoritma
    printf("Masukkan bilangan bulat iA = ");
    scanf("%d",&iA);
    printf("Masukkan bilangan bulat iB = ");
    scanf("%d",&iB);
    printf("Masukkan Operator : ");
    scanf("%s",&op);
    printf("\n");

    switch (op){
    case 'a':
        printf("%d", (iA + iB));
        break;
    case 'b':
        printf("%d", (iA - iB));
        break;
    case 'c':
        printf("%d", (iA * iB));
        break;
    case 'd':
        printf("%f", ((float) iA / iB));
        break;
    case 'e':
        printf("%d", (iA / iB));
        break;
    case 'f':
        printf("%d", (iA % iB));
        break;
    default:
        printf("Bukan pilihan menu yang benar");
    }
    printf("\n");
    return 0;
}
