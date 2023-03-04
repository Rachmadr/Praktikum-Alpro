//Nama File         : namaBulan.c
//Deskripsi         : Membuat program untuk menerima masukan angka dan merepresentasikan dengan bulan
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Selasa, 28 Februari 2023, 16:48

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int b;

    //Algoritma
    printf("Masukkan Nomor : ");
    scanf("%d",&b);
    printf("\n");
    if(b>=1 && b<=12){
        switch(b){
            case 1:
                printf("Januari");
                break;
            case 2:
                printf("Februari");
                break;
            case 3:
                printf("Maret");
                break;
            case 4:
                printf("April");
                break;
            case 5:
                printf("Mei");
                break;
            case 6:
                printf("Juni");
                break;
            case 7:
                printf("Juli");
                break;
            case 8:
                printf("Agustus");
                break;
            case 9:
                printf("September");
                break;
            case 10:
                printf("Oktober");
                break;
            case 11:
                printf("November");
                break;
            case 12:
                printf("Desember");
                break;
        }

    }else{
        printf("Masukan nomor bulan tidak tepat");
    }
    printf("\n");
    return 0;
}
