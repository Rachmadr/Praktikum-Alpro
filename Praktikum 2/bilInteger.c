//Nama File         : bilInteger.c
//Deskripsi         : Membuat program untuk mengecek apakah masukan sebuah bilangan positif, nol, atau negatif
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Selasa, 28 Februari 2023, 16:30

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan Bilangan : ");
    if(scanf("%d",&i)){
        if (i>=0){
            if (i==0){
                printf("Nol");
            }else{
                printf("Bilangan Bulat Positif");
            }
        }else{
            printf("Bilangan Bulat Negatif");
        }
    }else{
        printf("Bukan termasuk sebuah bilangan");
    }
    printf("\n");
    return 0;
}
