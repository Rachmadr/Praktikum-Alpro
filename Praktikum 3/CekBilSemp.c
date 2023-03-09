//Nama File         : CekBilSemp.c
//Deskripsi         : Membuat program untuk mengecek apakah N adalah bilangan sempurna
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Kamis, 09 Maret 2023, 18:36

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;      //{bilangan}
    int i;      //{counter}
    int faktor; //{faktor}

    //Algoritma
    printf("Masukan Bilangan : ");
    scanf("%d", &N);

    faktor = 0;
    if (N>0){
        for (i=1;i<N;i++){
            if (N % i == 0){
                faktor += i;
            }
        }
        if (faktor == N){
            printf("Bilangan Sempurna");
        }
        else{
            printf("Bukan Bilangan Sempurna");
        }
    }
    else{
        printf("Masukan Salah!");
    }
    printf("\n");
    return 0;
}
