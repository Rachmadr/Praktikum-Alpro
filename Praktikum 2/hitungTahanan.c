//Nama File         : hitungTahanan.c
//Deskripsi         : Membuat program untuk menghitung hambatan dengan nilai postif secara seri
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Selasa, 28 Februari 2023, 17:01

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int R1, R2, R3, Rt;

    //Algoritma
    printf("Masukkan Besar Tahanan 1 : ");
    scanf("%d",&R1);
    printf("Masukkan Besar Tahanan 2 : ");
    scanf("%d",&R2);
    printf("Masukkan Besar Tahanan 3 : ");
    scanf("%d",&R3);
    printf("\n");

    if (R1 >= 0 && R2 >= 0 && R3 >= 0){
        Rt = R1 + R2 + R3;
        printf("Tahanan Rangkaian Seri = %d", Rt);
    }else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    printf("\n");
    return 0;
}
