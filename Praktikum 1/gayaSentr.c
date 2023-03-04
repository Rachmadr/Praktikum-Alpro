//Nama File         : gayaSentr.c
//Deskripsi         : Membuat program untuk menghitung gaya
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Rabu, 22 Februari 2023, 15:38

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Kamus
    float m, v, r, F;

    //Algoritma
    printf("Massa = ");
    scanf("%f", &m);
    printf("Kecepatan = ");
    scanf("%f", &v);
    printf("Jari-jari = ");
    scanf("%f", &r);

    F = m * (pow(v,2)/r);

    printf("\nGayanya adalah F = %f \n", F);
    return 0;
}
