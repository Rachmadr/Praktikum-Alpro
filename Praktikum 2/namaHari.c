//Nama File         : namaHari.c
//Deskripsi         : Membuat program untuk menerima masukan angka dan merepresentasikan dengan hari
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Selasa, 28 Februari 2023, 16:15

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int h;

    //Algoritma
    printf("Masukkan Nomor : ");
    scanf("%d",&h);
    printf("\n");
    if(h>=1 && h<=7){
        switch(h){
            case 1:
                printf("Senin");
                break;
            case 2:
                printf("Selasa");
                break;
            case 3:
                printf("Rabu");
                break;
            case 4:
                printf("Kamis");
                break;
            case 5:
                printf("Jum'at");
                break;
            case 6:
                printf("Sabtu");
                break;
            case 7:
                printf("Minggu");
                break;
        }

    }else{
        printf("Masukan nomor hari tidak tepat");
    }
    printf("\n");
    return 0;
}
